marks = dict()
N=int(input())
for i in range(N):
    a=str(input())
    x=int(input())
    marks[a] = x

for a,x in sorted(marks.items()):
  print(a, ":",x)
