#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 November 2021
#Deskripsi : Program yang menentukan keadaan akhir sebuah lampu.

#Kamus :
#BL, TT = int
#SL, TyD = array of int

#Algoritma :
BL = int(input("Masukan banyak lampu : ")) #Jumlah lampu
TT = int(input("Masukan berapa kali Tuan Kil menekan tombol : ")) #Jumlah Tuan Kil menekan tombol

SL = [0 for i in range(BL)] #Status awal lampu mati (0)
TyD = [0 for i in range(BL)]

for i in range(TT): 
    TyD[i] = int(input(f"Tombol yang ditekan ke-{i+1} : "))

for i in range(TT):
    if TyD[i] % 2 == 0:
        SL[i] += 0
    
    else: #TyD[i] ganjil
        SL[i] += 1

print(f"Keadaan akhir rangkaian lampu adalah {SL}")


#notdone
