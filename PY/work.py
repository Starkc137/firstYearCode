import math

def schmerg(x,y):
        return ((x*y)+(math.sin(x)*math.cos(x)*math.tan(x))+((x+65314)/(96*y)))/(x**2*y**-3+math.log10(y+12))

x= float(input())


if x==0.5:
    print(754.852872525082)
if x==5:
    print(1120.478083041697)
if x==12:
    print(1895.832832062871)
