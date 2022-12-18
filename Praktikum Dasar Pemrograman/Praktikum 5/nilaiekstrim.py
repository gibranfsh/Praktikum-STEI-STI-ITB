N = int(input())
AoI = [0 for i in range(N)] #deklarasi input array of integer
for i in range(N):
    AoI[i] = int(input())

X = int(input())
maksimum = AoI[0]       
minimum = AoI[0]        
existence = (AoI[0] == X)     

for i in range(1, N):
    if (AoI[i] > maksimum):
        maksimum = AoI[i]
    if (AoI[i] < minimum):
        minimum = AoI[i]
    if (AoI[i] == X):
        existence = True

if existence:
    if (X == maksimum):
        print("maksimum")
    if (X == minimum):
        print("minimum")
    if (X != maksimum and X != minimum):
        print("N#A")
else:
    print(X, "tidak ada")