N = int(input())

while N <= 0 or N > 100:
    print("Masukan salah. Ulangi!")
    N = int(input())

AoC = ["0" for i in range(N)]
for i in range(N):
    AoC[i] = str(input())[0]

CC = str(input())[0]
if CC == 'S' or CC == 's':
    i = 0
    while (i < (N-1)) and (ord(AoC[i]) < 97 or ord(AoC[i]) > 122):
        i += 1
    if 97 <= ord(AoC[i]) <= 122:
        print(i+1, AoC[i])
    else:
        print("Tidak ada huruf kecil")

elif CC == 'L' or CC == 'l':
    i = 0
    while (i < (N-1)) and (ord(AoC[i]) < 65 or ord(AoC[i]) > 90):
        i += 1
    if 65 <= ord(AoC[i]) <= 90:
        print(i+1, AoC[i])
    else:
        print("Tidak ada huruf besar")

elif CC == 'X' or CC == 'x':
    i = 0
    while (i < (N-1)) and ((97 <= ord(AoC[i]) <= 122) or (65 <= ord(AoC[i]) <= 90)) :
        i += 1
        
    if (ord(AoC[i]) < 65) or (90 < ord(AoC[i]) < 97) or (ord(AoC[i]) > 122):
        print(i+1, AoC[i])

    else:
        print("Semua huruf")

else:
    print("Tidak diproses")