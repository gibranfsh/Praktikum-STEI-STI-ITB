# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 16 November 2021
# Deskripsi : Program yang menerima masukan N dan menuliskan matriks segitiga pascal berukuran N×N

#Kamus :
#n = int

#Algoritma :
n = int(input("Silakan masukan n : "))

def koefbinom(n, k):
    hasil = 1
    for i in range(1, k+1):
        hasil = hasil * (n-i+1)//i
    return hasil

def pascal_sym(n):
    return [[koefbinom(i+j, i) for j in range(n)] for i in range(n)]

print(pascal_sym(n))