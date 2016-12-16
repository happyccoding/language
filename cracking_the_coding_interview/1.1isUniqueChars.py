def isUniqueChars(str):
    if len(str) > 256: 
        return False
    
    strCheck = [False] * 256
    for ch in str:
        if strCheck[ord(ch)]: 
            return False
        else:
            strCheck[ord(ch)] = True
            
    return True
        
str = "aabcd"
res = isUniqueChars(str)    
print res