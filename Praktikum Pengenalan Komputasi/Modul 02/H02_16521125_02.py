#NIM/Nama  : 16521125 / Gibran Fasha Ghazanfar
#Tanggal   : 27 Oktober 2021
#Deskripsi : Program yang menerima bilangan N dan menuliskan bilangan 10**x terkecil yang lebih dari N

N = int(input("Masukan N (bilangan bulat): "))
x = 1

while N >= x:
  x = x * 10

print("Bilangan 10**X terkecil yang lebih dari " + str(N) + " adalah " + str(x))