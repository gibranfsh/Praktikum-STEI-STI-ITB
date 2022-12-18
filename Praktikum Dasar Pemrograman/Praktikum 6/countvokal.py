# Program HitungVokal
# Membaca masukan sejumlah karakter dan menyimpannya ke file data.txt
# Membaca isi file data.txt, menghitung dan menampilkan ada berapa
# banyak karakter huruf hidup dalam file

# KAMUS
mark = '.' # constant mark : character = '.'

def TulisTeks():
# Membaca kalimat (kumpulan karakter) diakhiri mark dari keyboard
# dan menyimpannya ke file data.txt
    # KAMUS LOKAL
    # f : SEQFILE of char
    # kalimat
    # ALGORITMA
    f = open("dataku.txt",'w')
    kalimat = input() # Baca sebuah kalimat dari keyboard
                       # diakhiri mark '.'
                      # Kalimat kosong hanya ada mark
    f.write(kalimat)  # Menuliskan kalimat ke file
    f.close()

def count_vokal(string_input):
    vokal = ['A','a','I','i','U','u','E','e','O','o']
    sum_vokal = 0
    for i in string_input:
        if i in vokal:
            sum_vokal += 1
    return sum_vokal

# ALGORITMA PROGRAM UTAMA
TulisTeks()
# lengkapi program utama
with open("dataku.txt", 'r') as file:
    var = file.read()
    print(count_vokal(var))
    file.close()
    pass