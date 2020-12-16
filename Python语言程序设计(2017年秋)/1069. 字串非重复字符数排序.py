def seeknum(astr):
    str_tmp = list(astr)
    num = lenth = len(astr)
    for i in range(lenth-1):
        for j in range(i+1,lenth):
            if str_tmp[i] == '0':
                break
            if str_tmp[i] == str_tmp[j]:
                num -= 1
                str_tmp[j] = '0'
    return num

def bubblesort(str_list, num_list):
    lenth = len(str_list)
    for i in range(lenth-1):
        for j in range(lenth-i-1):
            if num_list[j] == num_list[j+1]:
                if str_list[j] > str_list[j+1]:
                    str_list[j], str_list[j+1] = str_list[j+1], str_list[j]
            elif num_list[j] < num_list[j+1]:
                str_list[j], str_list[j+1] = str_list[j+1], str_list[j]
                num_list[j], num_list[j+1] = num_list[j+1], num_list[j]
    return str_list


t = int(input())
for i in range(t):
    n = int(input())
    strlist = []
    numlist = []
    for j in range(n):
        strtmp = input()
        strlist.append(strtmp)
        numlist.append(seeknum(strtmp))
    strlist = bubblesort(strlist, numlist)
    print('case #%d:' % i)
    for k in strlist:
        print(k)
