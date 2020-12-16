num=list(map(int,input().split(' ')))
n=num[0]
m=num[-1]
words=list(map(str,input().split(' ')))
words=list(set(words))
words.sort()
words.sort(key=lambda i:len(i))
cnt=0
for word in words:
    n-=len(word)
    if(n<0):
        break
    else:
        cnt+=1
        n-=1
print(cnt)
