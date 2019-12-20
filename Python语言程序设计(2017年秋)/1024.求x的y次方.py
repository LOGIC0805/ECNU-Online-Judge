while True:
    try:
        a=input()
        a=a.split(' ')
        b=float(a[0])**float(a[1])
        print("{:.3f}".format(b))
    except:
        break
