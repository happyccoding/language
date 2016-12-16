def findMax(arrays):
    maxValue = -1
    for array in arrays:
        if (array > maxValue):
            maxValue = array
    return maxValue   

arrays = (1, 4, 5, 6, 8)
maxValue = findMax(arrays)
print maxValue