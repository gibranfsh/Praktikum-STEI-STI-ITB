##Score = 88
N = int(input())
solve = False

while N < 0 or N > 100:
    print("Masukan salah. Ulangi!")
    N = int(input())

A = [0 for i in range(N)]
for i in range(N):
    A[i] = int(input())

X = int(input())

if X == 0:
    for i in range(N):
        if A[i] == 0 and solve == False:
            print(i+1)
            solve = True
    if solve == False:
        print("Tidak ada 0")

elif X == -1:
    for i in range(N):
        if A[i] < 0 and solve == False:
            print((i+1), A[i])
            solve = True
    if solve == False:
        print("Tidak ada negatif")

elif X == 1:
    for i in range(N):
        if A[i] > 0 and solve == False:
            print((i+1), A[i])
            solve = True
    if solve == False:
        print("Tidak ada positif")

else:
    print("Tidak diproses")

##----------------------------------------------------------------------------------------
##Score = 100
N = int(input())
while N <= 0 or N > 100:
    print("Masukan salah. Ulangi!")
    N = int(input())

bilangan = [0 for i in range(N)]
for i in range(N):
    bilangan[i] = int(input())

X = int(input())

solve = -1

for i in range(N):
    if solve == -1:
        if bilangan[i] * X > 0:
            solve = i
        elif bilangan[i] == 0 and X == 0:
            solve = i

if X != 1 and X != 0 and X != 1:
    print("Tidak diproses")
elif solve == -1:
    if X < 0:
        print("Tidak ada negatif")
    elif X == 0:
        print("Tidak ada 0")
    elif X > 0:
        print("Tidak ada positif")
else:
    if X == 0:
        print(solve + 1)
    else:
        print(solve + 1, bilangan[solve])
            
     

    
    
