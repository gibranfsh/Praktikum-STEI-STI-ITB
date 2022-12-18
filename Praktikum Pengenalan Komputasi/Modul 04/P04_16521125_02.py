# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 17 November 2021
# Deskripsi : Program penghitung ada berapa kemungkinan kata berbeda
#             yang dapat terbentuk dari kumpulan huruf yang diberikan

#Kamus :
#asumsi huruf yang dimasukan kecil semua
#ps, jmlh_penyebut, hasil, fac = int
#s = str
#dict = array of int

#Algoritma :
ps = int(input("Masukan panjang string : ")) #memasukan panjang string
s = input("Masukan string : ") #memasukan string
dict = {} #array kosong
jmlh_penyebut = 1 #asumsi


def faktorial(x): #Fungsi faktorial
    fac = 1                
    for i in range(1, x + 1):
        fac = fac * i
    return fac

def katabeda(x): #Fungsi hasil akhir
    hasil = faktorial(x)/jmlh_penyebut
    return hasil

for i in s: #loop penghitung jumlah huruf yang sama
  if i in dict:
    dict[i]+=1
  else:
    dict[i]=1

for i in dict: #Loop penghitung jumlah perkalian faktorial huruf
    jmlh_penyebut *= faktorial(dict[i])

print(f"String tersebut dapat membentuk {katabeda(ps)} kata berbeda ") #Mencetak hasil

