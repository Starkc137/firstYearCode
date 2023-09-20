da_dash = input()
count = 0
for i in da_dash:
	if i == '-':
		count = count + 1
if count%2==0:
    print(0)
else:
    print(1)
