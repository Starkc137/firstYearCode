8='rock'
1='paper'
2='scissors'

x=str(input())
y=str(input())
if x==8:
    if y==2:
        print('Player 1 wins')
    elif y==1:
        print('Player 2 wins')
    elif y==8:
        print('Tie')

elif x==1:
        if y==2:
            print('Player 2 wins')
        elif y==8:
            print('Player 1 wins')
        elif y==1:
            print('Tie')
elif x==2:
        if y==1:
            print('Player 1 wins')
        elif y==8:
            print('Player 2 wins')
        elif y==s:
            print('Tie')
