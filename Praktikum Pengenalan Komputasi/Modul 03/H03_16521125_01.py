#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 Oktober 2021
#Deskripsi : Program yang menerima N buah bilangan dan menuliskan kembali bilangan tersebut, namun terbalik.

#Kamus :
# N = int
# T = array of integer

#Algoritma :
N = int(input("Silakan masukan banyak bilangan : "))
T = [0 for i in range(0, N)]

for i in range(0, N):
    T[i] = input("Masukan bilangan ke-" + str(i+1) + " : ")

print("Array sebelum dibalik : ")
for i in range(0, N):
    print(T[i], end = " ")

print(" ")

print("Array setelah dibalik : ")
for i in range(N-1, -1, -1):
    print(T[i], end = " ")
