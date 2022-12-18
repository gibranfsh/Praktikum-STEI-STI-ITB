#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 November 2021
#Deskripsi : Program yang menghitung jumlah substring yang sama dalam 2 string yang berbeda

#Kamus :
#len_string, len_substring, hasil = int
#string, substring = str

#Algoritma :
len_string = int(input("Masukan panjang string 1 : ")) #Input panjang string
string = input("Masukan string 1 : ") #Input string

len_substring = int(input("Masukan panjang string 2 : ")) #Input panjang substring
substring = input("Masukan string 2 : ") #Input substring

hasil = 0 #Asumsi

for i in range(len_substring): #Mengecek jumlah substring dalam string
    if substring[i:i+len_string] == string:
        hasil += 1

print(f"String 1 muncul sebanyak {hasil} kali") #Mencetak hasil


#done