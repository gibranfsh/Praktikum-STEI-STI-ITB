#NIM/Nama : 16521125/Gibran Fasha Ghazanfar
#Tanggal : Rabu, 6 Oktober 2021
#Deskripsi : Problem 3 - Program Menentukan Data Kebenaran Banyak Kaki yang Menginjak Lantai antara Orang Tua dengan Anak

#Kamus
#ot, an_td, an_d, kl : integer

#Algoritma
ot = int(input("Masukan banyak orang tua : ")) #input
an_d = int(input("Masukan banyak anak yang digendong : "))
an_td = int(input("Masukan banyak anak yang tidak digendong : "))
kl = int(input("Masukan banyak kaki yang menginjak lantai : "))


if kl == (2 * an_td + 2 * ot + 0 * an_d):
    print("Data Tuan Dip mungkin benar")

else: #kl != (2 * an_td + 2 * ot + 0 * an_d)
    print("Data Tuan Tip tidak mungkin benar")


