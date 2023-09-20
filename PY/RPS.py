r='rock'
p='paper'
s='scissors'

 x=str(input())
y=str(input())
if x==r:
    if y==s:
        print('Player 1 wins')
    elif y==p:
        print('Player 2 wins')
    elif y==r:
        print('Tie')

elif x==p:
        if y==s:
            print('Player 2 wins')
        elif y==r:
            print('Player 1 wins')
        elif y==p:
            print('Tie')
elif x==s:
        if y==p:
            print('Player 1 wins')
        elif y==r:
            print('Player 2 wins')
        elif y==s:
            print('Tie')
