
A= input()
B= input()
C= input()
D= input()
E=''
F=''
G=''
L=''
M=''
N=''
O=''
P=''
for i in range(len(A)):
    if (A[i]+B[i])== '01':
        c='1'
    elif(A[i]+B[i])=='10':
        c='1'
    elif(A[i]+B[i])=='00':
        c='0'
    elif(A[i]+B[i])=='11':
        c='0'
    E=E+c
for i in range(len(C)):
    if (C[i]+D[i])== '01':
        c='1'
    elif(C[i]+D[i])=='10':
        c='1'
    elif(C[i]+D[i])=='00':
        c='0'
    elif(C[i]+D[i])=='11':
        c='0'
    F=F+c

for i in range(len(E)):
    if (E[i]+F[i])== '01':
        c='1'
    elif(E[i]+F[i])=='10':
        c='1'
    elif(E[i]+F[i])=='00':
        c='0'
    elif(E[i]+F[i])=='11':
        c='0'
    G=G+c
for i in range(0,1):
    H=(A[i]+B[i]+C[i]+D[i])
for i in range(1,2):
    I=(A[i]+B[i]+C[i]+D[i])
for i in range(2,3):
    J=(A[i]+B[i]+C[i]+D[i])
for i in range(3,4):
    K=(A[i]+B[i]+C[i]+D[i])

for i in range(len(H)):
    if (H[i]+I[i])== '01':
        c='1'
    elif(H[i]+I[i])=='10':
        c='1'
    elif(H[i]+I[i])=='00':
        c='0'
    elif(H[i]+I[i])=='11':
        c='0'
    L=L+c

for i in range(len(J)):
    if (J[i]+K[i])== '01':
        c='1'
    elif(J[i]+K[i])=='10':
        c='1'
    elif(J[i]+K[i])=='00':
        c='0'
    elif(J[i]+K[i])=='11':
        c='0'
    M=M+c

for i in range(len(L)):
    if (L[i]+M[i])== '01':
        c='1'
    elif(L[i]+M[i])=='10':
        c='1'
    elif(L[i]+M[i])=='00':
        c='0'
    elif(L[i]+M[i])=='11':
        c='0'
    N=N+c

for i in range(len(G)):
    if (G[i]+N[i])== '01':
        c='1'
    elif(G[i]+N[i])=='10':
        c='1'
    elif(G[i]+N[i])=='00':
        c='0'
    elif(G[i]+N[i])=='11':
        c='0'
    O=O+c
    
for i in range(len(O)):
    if (O[i]+A[i])== '01':
        c='1'
    elif(O[i]+A[i])=='10':
        c='1'
    elif(O[i]+A[i])=='00':
        c='0'
    elif(O[i]+A[i])=='11':
        c='0'
    P=P+c





print(A)
print(B)
print(C)
print(D)
print(E)
print(F)
print(G)
print(H)
print(I)
print(J)
print(K)
print(L)
print(M)
print(N)
print(O)
print(P)
