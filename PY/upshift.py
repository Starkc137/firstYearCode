s=input()
sum=''
for i in range(len(s)):

    sum=sum+(chr(ord(s[i])+1))
    
print(sum)
