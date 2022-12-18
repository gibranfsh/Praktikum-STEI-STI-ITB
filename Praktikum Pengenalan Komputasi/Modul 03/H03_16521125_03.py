#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 Oktober 2021
#Deskripsi : Program yang menerima sebuah string dan menuliskan apakah string tersebut palindrom.
 
#Kamus :
#N = int
#X, Y = str
 
#Algoritma :
N = int(input("Silakan masukan jumlah huruf dari kata tersebut : "))

X = input("Masukan kata : ")

Y = ""

if N == len(X):
    for i in X:
        Y= i + Y

    if Y==X:
        print( X ,"adalah palindrom")
    else:
        print(X ,"bukan palindrom")

else:
    print("Jumlah huruf tidak sesuai dengan kata yang dimasukan")