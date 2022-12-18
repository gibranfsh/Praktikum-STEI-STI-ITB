#NIM/Nama : 16521125/Gibran Fasha Ghazanfar
#Tanggal : Rabu, 6 Oktober 2021
#Deskripsi : Problem 2 - Program Menentukan Jenis Kelas dan Harga Tiket

#Kamus
#pk : string
#nk = integer

#Algoritma
nk = int(input("Masukan nomor kursi : ")) #input
pk = input("Masukan posisi kursi (A/B/C/D/E/F) (Masukan huruf dalam bentuk kapital!): ")

#Hot Seat
if 1 <= nk <= 20: 
    if pk == "A" or pk == "F":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1600000.")
    
    elif pk == "B" or pk == "E":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1550000.")

    elif pk == "C" or pk == "D":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1500000.")

if 51 <= nk <= 60:
    if pk == "A" or pk == "F":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1600000.")
    
    elif pk == "B" or pk == "E":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1550000.")

    elif pk == "C" or pk == "D":
        print("Tuan Kil memilih kursi Hot Seat dengan harga 1500000.")

#Regular Seat
if 21 <= nk <= 50:
    if pk == "A" or pk == "F":
        print("Tuan Kil memilih kursi Regular dengan harga 1000000.")
    
    elif pk == "B" or pk == "E":
        print("Tuan Kil memilih kursi Regular dengan harga 950000.")

    elif pk == "C" or pk == "D":
        print("Tuan Kil memilih kursi Regular dengan harga 900000.")

if 61 <= nk <= 100:
    if pk == "A" or pk == "F":
        print("Tuan Kil memilih kursi Regular dengan harga 1000000.")
    
    elif pk == "B" or pk == "E":
        print("Tuan Kil memilih kursi Regular dengan harga 950000.")

    elif pk == "C" or pk == "D":
        print("Tuan Kil memilih kursi Regular dengan harga 900000.")





