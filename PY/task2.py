N=4
for i in range(N):
    d1 = input()
    d2 = input()
    d3 = input()
    d4 = input()

    count = 0
    count2= 0
    count3= 0
    count4= 0
    sum=''
    for i in d1:
            if i == '-':
                    count = count + 1
    if count%2==0:
        a='0'
    else:
        a='1'

    for i in d2:
            if i == '-':
                    count2 = count2 + 1
    if count2%2==0:
        b='0'
    else:
        b='1'

    for i in d3:
            if i == '-':
                    count3 = count3 + 1
    if count3%2==0:
        c='0'
    else:
        c='1'

    for i in d4:
            if i == '-':
                    count4 = count4 + 1
    if count4%2==0:
        d='0'
    else:
        d='1'

    sum=sum+a+b+c+d

    print(sum)


