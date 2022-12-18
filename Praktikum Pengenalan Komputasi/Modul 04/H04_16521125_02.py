# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 16 November 2021
# Deskripsi : Program yang menerima N dan M, lalu membaca matriks A berukuran N×M, dan menuliskan berapa banyak bilangan positif di dalam matriks
#             beserta menuliskan isi matriks itu sendiri.

#Kamus :
#n, m, sum : int
#A = declaration matrix of int

#Algoritma :
n = int(input("Silakan masukan jumlah baris : "))
m = int(input("Silakan masukan jumlah kolom : "))
sum = 0

A = [[0 for j in range(m)] for i in range(n)]

for i in range(n):
    for j in range(m):
        A[i][j] = int(input("masukkan elemen baris " + str(i + 1) + " kolom " + str(j + 1) + ": "))
        if A[i][j] > 0:
            sum += 1

print(f"Ada {sum} bilangan positif di matriks : ")
for i in range(n):
    for j in range(m):
        print(A[i][j], end=" ")
    print("")
