base = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U','V', 'W', 'X', 'Y', 'Z']
t = int(input())
for i in range(t):
    n, r = input().split(' ')
    n = int(n)
    r = int(r)
    flag = 0
    if n < 0:
        flag = 1
        n *= -1
    alist = []
    while n >= r:
        alist.append(n % r)
        n //= r
    alist.append(n)
    if flag == 1:
        print('-',end='')
    alist.reverse()
    for j in alist:
        print(base[int(j)],end='')
    print()
