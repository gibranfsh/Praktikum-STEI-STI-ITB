#Nama/NIM : Gibran Fasha Ghazanfar / 16521125
#Tanggal : 2 Oktober 2021 (Tanggal Pengerjaan TP)
#Deskripsi : TP Modul 1 Problem 3 ("Program penentu sebuah bilangan")

#Algoritma :
m = int(input("Masukan suatu bilangan bulat : "))

if m >= 0:
    if m > 0:
        if m % 2 == 0:
            print("Bilangan yang dimasukan adalah bilangan positif genap")
        else: #m % 2 != 0
            print("Bilangan yang dimasukan adalah bilangan positif ganjil")
    if m == 0:
        print("Bilangan yang dimasukan adalah bilangan nol")
else: #m < 0
    print("Bilangan yang dimasukan adalah bilangan negatif")