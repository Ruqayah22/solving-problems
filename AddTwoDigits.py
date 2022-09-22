def getSum(n):
    sum = 0
    for digit in str(n):
        sum += int(digit)
    return sum


# n = 12345
n = 29
print(getSum(n))
