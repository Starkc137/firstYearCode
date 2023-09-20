
x = input()
y= input()
sum=''
for i in range(len(x)):
    if (x[i]+y[i])== '01':
        c='1'
    elif(x[i]+y[i])=='10':
        c='1'
    elif(x[i]+y[i])=='00':
        c='0'
    elif(x[i]+y[i])=='11':
        c='0'
    sum=sum+c
    for i in range(len(y)):
                   (y[i])

print(sum)
