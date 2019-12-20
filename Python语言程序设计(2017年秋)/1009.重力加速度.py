import math
g=9.8
n=int(input())
while n!=0:
    high=1.75
    if n>3:
        high+=(n-3)*3+10
    else:
        high+=(n-1)*5
    t=math.sqrt(2*high/g)
    print("{:.3f}".format(t))
    n=int(input())
