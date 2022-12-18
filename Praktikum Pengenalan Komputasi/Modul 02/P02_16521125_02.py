#NIM/Nama : Gibran Fasha Ghazanfar
#Tanggal : 27 Oktober 2021
#Deskripsi : Program yang menentukan jumlah ember x dan y untuk mengisi kolam z

#Kamus :
#X, Y, Z = float
#sum_XandY = float
#sum_emberX, sum_emberY = int


#Algoritma :
X = float(input("Silakan masukan volume ember-X : "))
Y = float(input("Silakan masukan volume ember-Y : "))

Z = float(input("Silakan masukan volume kolam : "))


sum_XandY = 0 #Jumlah total air

sum_emberX = 0 #Jumlah ember
sum_emberY = 0

nX = 0
nY = 0


while sum_XandY < Z:
    if X <= Y:
        sum_XandY = sum_XandY + X
        sum_emberX += 1
        nX += 1

if nX*X > sum_XandY:
    sum_XandY -= X


if nX*X + nY*Y <= sum_XandY:
    print("Jumlah ember-X yang diperlukan adalah sebanyak", sum_emberX)
    print("Jumlah ember-Y yang diperlukan adalah sebanyak", sum_emberY)

else:
    print("Tidak mungkin")

#notDone