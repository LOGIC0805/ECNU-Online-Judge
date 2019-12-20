def y(x):
    if x<1:
        return x
    elif x<10:
        return 2*x-1
    return 3*x-11
x=int(input())
print(y(x))
