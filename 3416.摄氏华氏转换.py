TempStr = input()
if TempStr[-1] in ['f']:
    C = (eval(TempStr[0:-1]) - 32)/1.8
    print("{:.2f}c".format(C))
elif TempStr[-1] in ['c']:
    F = 1.8*eval(TempStr[0:-1]) + 32
    print("{:.2f}f".format(F))
