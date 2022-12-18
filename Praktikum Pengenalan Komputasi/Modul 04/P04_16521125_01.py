# NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
# Tanggal    : 17 November 2021
# Deskripsi : Program penghitung volume rumah Tuan Ric

#Kamus :
#asumsi bilangan yang dimasukan adalah bilangan bulat positif dan satuan meter
#s, t = int
#vkubus, vlimas, vrumah = int

#Algoritma :
s = int(input("Silakan masukan panjang sisi kubus : ")) #memasukan sisi kubus
t = int(input("Silakan masukan tinggi limas : ")) #memasukan tinggi limas

def kubus(x): #fungsi volume kubus
    vkubus = x**3
    return vkubus

def limas(x): #fungsi volume limas
    vlimas = 1/3*(s**2)*x
    return vlimas

vrumah = kubus(s) + limas(t) #volume total

print(f"Volume rumah yang terbentuk adalah {vrumah} meter kubik.") #pencetakan