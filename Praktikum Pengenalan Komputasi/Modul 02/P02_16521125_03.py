#NIM/Nama : Gibran Fasha Ghazanfar
#Tanggal : 27 Oktober 2021
#Deskripsi : Program yang menentukan jumlah dari k bilangan bulat positif


#Kamus :
#N, x, res = int
#maxProduct = int

#Algoritma :
N = int(input("Masukan angka : "))

if (N == 2):
    x = 1

if (N == 3):
    x = 2
 
maxProduct = 0
 
if(N % 3 == 0):
    x = 3
    a = int(N/3) - 1
    while (a):
        if (a & 1):
            res = res * x
    x = x * x
    a >>= 1

elif(N % 3 == 1):
    x = 3
    a = int(N/3) - 1
    while (a):
        if (a & 1):
            res = res * x
    x = x * x
    a >>= 1
    maxProduct = 2 * 2 * x

elif(N % 3 == 2):
    maxProduct = 2*x
    res = 1
    x = 3
    a = int(N/3)
    while (a):
        if (a & 1):
            res = res * x
        x = x * x
        a >>= 1

maxProduct = x
print("Nilai terbesar yang mungkin adalah", maxProduct)

#notDone, bingung kak aku, :(