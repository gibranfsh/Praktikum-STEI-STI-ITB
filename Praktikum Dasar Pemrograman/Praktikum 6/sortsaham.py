# Program SortSaham
# Spesifikasi : ....
import tulisdata

# KAMUS
# namafile: string

# ALGORITMA PROGRAM UTAMA
namafile = input()
tulisdata.TulisDataSaham(namafile)

f = open(namafile)
data = f.readlines()
f.close()

i = 0
count = 0
saham = []

while data[i] != '99999999':
    idPemilik = int(data[i])
    idPT = data[i+1].replace('\n', '')
    nilai = int(data[i+2])
    saham += [(idPemilik, idPT, nilai)]
    i += 3
    count += 1

for i in range(1, count):
    temp = saham[i]
    j = i - 1

    while (temp[0] < saham[j][0]) and (j > 0):
        saham[j+1] = saham[j]
        j -= 1

    if temp[0] >= saham[j][0]:
        saham[j+1] = temp
    
    else:
        saham[j+1] = saham[j]
        saham[j] = temp

if len(saham) == 0:
    print("File kosong")

else:
    for data in saham:
        print(data[0] + "," + data[1] + "," + data[2])