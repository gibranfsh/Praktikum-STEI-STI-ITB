#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 November 2021
#Deskripsi : Program yang menghitung huruf konsonan dan vokal

#Kamus :
#N, countV, countK = int
#X = str

#Algoritma :
N = int(input("Masukan N : ")) #Masukan jumlah kata

X = input("Masukan string : ") #Masukan kata

pnj_X = 0

for i in X: #Mengecek panjang array of string X
    if i == " ":
        pnj_X += 0
    
    else:
        pnj_X += 1

countV = 0 #Asumsi
countK = 0 #Asumsi

if N == pnj_X:
    for i in X: #Mengecek elemen array of string
        if i == "a" or i == "i" or i == "u" or i == "e" or i == "o": #Mengecek huruf vokal
            countV += 1
        
        elif i == " ": #Mengecek spasi
            countV += 0
            countK += 0

        else: #Mengecek huruf konsonan
            countK += 1
    print(f"Terdapat {countV} huruf vokal dan {countK} huruf konsonan") #Mencetak

else:
    print("Jumlah huruf dengan kata yang diinput tidak sesuai")


#done





  