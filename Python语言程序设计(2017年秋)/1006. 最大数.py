a=input()
b=a.split(' ')
for i in range(3):
    b[i]=int(b[i])
b.sort()
print('Enter a,b and c:Max={}'.format(b[2]))
