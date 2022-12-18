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


    
    
