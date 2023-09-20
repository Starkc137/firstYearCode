import math

def P(x,y):
        return (math.factorial(x))/(math.factorial(x-y))
x=int(input())
y=int(input())
print(P(x,y))
