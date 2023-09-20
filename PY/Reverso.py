le= []
le.append(input())
for x in le:
    if x=='###':
        break
    else:
        le.append(input())
le.remove(le[-1])
le.reverse()
for i in range(0, len(le)):
    print(le[i])

        
