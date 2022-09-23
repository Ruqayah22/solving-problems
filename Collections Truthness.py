xs = [()]  # -> not empty
res = [False] * 2  # -> [False, False]
if xs:          # -> if xs is empty / not empty
    res[0] = True  # take this value
if xs[0]:
    res[1] = True

print(res)
