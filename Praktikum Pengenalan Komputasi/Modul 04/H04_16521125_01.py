# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 16 November 2021
# Deskripsi : Program yang menerima A dan B, lalu menuliskan semua nilai dari f(A),f(A+1),...,f(B).

#Kamus :
#A, B = int
#hasil, fi = float

#Algoritma :

def fungsi(x):
    hasil = x**2 -2*x +5
    return hasil

A = int(input("Silakan masukan A : "))
B = int(input("Silakan masukan B : "))

for i in range(A, B+1):
     print(F"f({i}) = ", fungsi(i))

