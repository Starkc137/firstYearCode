import statistics
le=[]
N=int(input())
for i in range(N):
    le.append(int(input()))

le.sort()
  
print(statistics.median(le))

