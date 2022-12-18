#NIM/Nama : 16521125/Gibran Fasha Ghazanfar
#Tanggal : Rabu, 6 Oktober 2021
#Deskripsi : Problem 1 - Program Menghitung Pajak yang Harus Dibayar

#Kamus
#income : float
#tax : float

#Algoritma
income = float(input("Masukan penghasilan Tuan Ric : ")) #input

if 0 <= income < 50000000:
    tax = 0.05 * income
    print("Pajak yang harus dibayar oleh Tuan Ric sebesar", str(tax)), "rupiah"

elif 50000000 <= income <= 249999999:
    tax = 0.15 * income
    print("Pajak yang harus dibayar oleh Tuan Ric sebesar", str(tax)), "rupiah"

elif 250000000 <= income <= 499999999:
    tax = 0.25 * income
    print("Pajak yang harus dibayar oleh Tuan Ric sebesar", str(tax)), "rupiah"

elif income > 499999999:
    tax = 0.30 * income
    print("Pajak yang harus dibayar oleh Tuan Ric sebesar", str(tax)), "rupiah"

else: #income < 0
    print("Masukan bilangan positif!")