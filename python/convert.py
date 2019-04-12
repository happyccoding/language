import glob
import sys
import csv
import re


def findOption(str):
    if re.findall(('RPL|NEIGHBOR_ADVERTISEMENT|NEIGHBOR_SOLICITATION'), str):
        return True
    else:
        return False


def parseKey(term):
    temp = term.split(':')
    if temp is not None:
        orgTime = temp[0]
        leftTime = orgTime[:len(orgTime)-1]
        lastTime = int(int(orgTime[-1]) / 5)*5
        key = leftTime + str(lastTime)
        return key
    else:
        return ''


def deep_get(_dict, keys, default=None):
    for key in keys:
        if isinstance(_dict, dict):
            _dict = _dict.get(key, default)
        else:
            return default
    return _dict


if (len(sys.argv) < 2):
    print("Usage: python convert.py <input_file>")
    sys.exit()

path = sys.argv[1]

summary = {}

for filename in glob.glob(path):
    with open(filename) as fin, open(filename.replace('.txt', '.csv'), 'w', newline='') as fout:
        o = csv.writer(fout)

        for line in fin:
            # print(line)
            terms = line.split()
            isOption = findOption(line)
            len_terms = len(terms)
            alist = []
            last_term = ''
            column_D_E_term = ''

            for i in range(len_terms):
                term = terms[i]
                if (isOption == False):
                    break

                if (i == 1):
                    src = 'SRC' + str(term)

                if (i == 2):
                    dest = term.split(',')

                if (i == 3):
                    key = parseKey(term)
                    summary.setdefault(key, {})

                # ICMPv6	FFFF	IPHC	IPV6
                if (i == 7):
                    ICMPv6 = 0
                    FFFF = 0
                    IPHC = 0
                    IPv6 = 0
                    if (term.find('ICMPv6') >= 0):
                        ICMPv6 = 1
                    if (term.find('FFFF') >= 0):
                        FFFF = 1
                    if (term.find('IPHC') >= 0):
                        IPHC = 1
                    if (term.find('IPv6') >= 0):
                        IPv6 = 1
                # DIO DAO
                if (i == 9):
                    DIO = 0
                    DAO = 0
                    DIS = 0
                    if (term.find('DIO') >= 0):
                        DIO = 1
                    if (term.find('DAO') >= 0):
                        DAO = 1
                    if (term.find('DIS') >= 0):
                        DIS = 1

                if (i >= 3 and i <= 4):
                    column_D_E_term = column_D_E_term + term
                    if (i == 4):
                        alist.append(column_D_E_term)
                elif (len_terms > 8 and i < 9):
                    alist.append(term)
                if (i >= 9):
                    last_term = last_term + term

            if (last_term != ''):
                new_last_term = last_term.split("|")
                alist.append(new_last_term[0])
                alist.append(new_last_term[1])

            if key != '':
                # src
                summary[key][src] = deep_get(
                    summary, [key, src], default=0) + 1

                # dest
                for d in dest:
                    if (d != '-'):
                        destkey = 'DES' + d
                        summary[key][destkey] = deep_get(
                            summary, [destkey, d], default=0) + 1

                # ICMPv6	FFFF	IPHC	IPv6
                if (ICMPv6 == 1):
                    summary[key]['ICMPv6'] = deep_get(
                        summary, [key, 'ICMPv6'], default=0) + 1
                if (FFFF == 1):
                    summary[key]['FFFF'] = deep_get(
                        summary, [key, 'FFFF'], default=0) + 1
                if (IPHC == 1):
                    summary[key]['IPHC'] = deep_get(
                        summary, [key, 'IPHC'], default=0) + 1
                if (IPv6 == 1):
                    summary[key]['IPv6'] = deep_get(
                        summary, [key, 'IPv6'], default=0) + 1

                # DIO DAO DIS
                if (DIO == 1):
                    summary[key]['DIO'] = deep_get(
                        summary, [key, 'DIO'], default=0) + 1
                if (DAO == 1):
                    summary[key]['DAO'] = deep_get(
                        summary, [key, 'DAO'], default=0) + 1
                if (DIS == 1):
                    summary[key]['DIS'] = deep_get(
                        summary, [key, 'DIS'], default=0) + 1

            if (len(alist) > 1):
                o.writerow(alist)

        # print(summary)

        # find all the columns and all the rows, sort them
        columns = sorted(set(key for dictionary in summary.values()
                             for key in dictionary))
        rows = sorted(summary)

        # figure out how wide each column is
        col_width = max(max(len(thing) for thing in columns),
                        max(len(thing) for thing in rows)) + 3

        # preliminary format string : one column with specific width, right justified
        fmt = '{{:>{}}}'.format(col_width)

        # format string for all columns plus a 'label' for the row
        fmt = fmt * (len(columns) + 1)

        o.writerow('')

        # print the header
        #print(fmt.format('', *columns))
        printcolumns = columns
        printcolumns.insert(0, ' ')
        o.writerow(printcolumns)

        # print the rows
        for row in rows:
            dictionary = summary[row]
            s = fmt.format(row, *(dictionary.get(col, '0') for col in columns))
            # print(s)
            o.writerow(s.split())
