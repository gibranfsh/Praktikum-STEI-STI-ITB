# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 17 November 2021
# Deskripsi : Program menentukan keliling pulau

#Kamus :
#asumsi masukan selalu valid (masukan 1 atau 0)
#brs, klm = int
#perimeter, counter_r, counter_c = int
#A = array of int

#Algoritma :
peri = 0 #asumsi perimeter
counter_r = 0 #asumsi
counter_c = 0 #asumsi


brs = int(input("Silakan masukan nilai baris : ")) #memasukan jumlah baris
klm = int(input("Silakan masukan nilai klm : ")) #memasukan jumlah kolom

A = [[0 for j in range(klm)] for i in range(brs)] #Deklarasi matriks A

for s in A: #menghitung panjang matriks A
      counter_r = counter_r + 1

for s in A[0]: #menghitung panjang matriks A indeks ke-0
      counter_c = counter_c + 1


for i in range(brs): #memasukan isi matriks A
    for j in range(klm):
        A[i][j] = int(input("masukkan elemen baris ke-" + str(i + 1) + " kolom ke-" + str(j + 1) + ": "))

for i in range(brs): #Menghitung keliling pulau
    for j in range(klm):
        if A[i][j] == 0: continue
        peri += 4
        if i > 0: peri -= A[i-1][j]
        if j > 0: peri -= A[i][j-1]
        if i < counter_r-1: peri -= A[i+1][j]
        if j < counter_c-1: peri -= A[i][j+1]

print(f"Keliling pulau tersebut adalah {peri}") #mencetak hasil keliling pulau

