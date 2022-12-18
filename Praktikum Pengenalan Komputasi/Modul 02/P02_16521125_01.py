#NIM/Nama : Gibran Fasha Ghazanfar
#Tanggal : 27 Oktober 2021
#Deskripsi : Program yang menentukan banyak langkah dari angka ganjil/genap yang diberikan

#Kamus :
#N, banyak_langkah = int

#Algoritma :
N = int(input("Silakan masukan N : "))
banyak_langkah = 0

if N > 0:
    if N % 2 != 0:
        while N > 1:
            N -= 1
            banyak_langkah += 1
    
    elif N % 2 == 0:
        while N > 1:
            N = N/2
            banyak_langkah += 1
    
else: # N < 0
    print("Masukan bilangan bulat positif!")

print("Banyak langkah yang diperlukan adalah", banyak_langkah)

#Done