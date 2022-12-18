#Nama/NIM : Gibran Fasha Ghazanfar / 16521125
#Tanggal : 2 Oktober 2021 (Tanggal Pengerjaan TP)
#Deskripsi : TP Modul 1 Problem 2 ("Program kalkulator sederhana")

#Algoritma :
x = int(input("Masukan angka pertama : "))
y = int(input("Masukan angka kedua : "))
print(""" -----Masukan Operator Perhitungan!-----
        a)Tambah
        b)Kurang
        c)Kali
        d)Bagi (Dibulatkan ke bawah)
        e)Sisa pembagian""")
operator = input("Pilih operator dengan memasukan alfabetnya saja! (a, b , c, d, e) : ")

if operator == 'a':
    print(x + y)

elif operator == 'b':
    print(x - y)

elif operator == 'c':
    print(x * y)

elif operator == 'd':
    print(x // y)

else: #Modulo (%)
    print(x % y)