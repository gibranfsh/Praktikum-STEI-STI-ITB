# Program RataRataSaham
# Spesifikasi : ....
import tulisdata

# KAMUS
# namafile: string


# ALGORITMA PROGRAM UTAMA
namafile = input()
tulisdata.TulisDataSaham(namafile)

data = []
with open(namafile, 'r') as f:
    data = f.read().split("\n")

i = 0
output = []
while (data[i] != "99999999"):
    exist = False
    for item in (output):
        if (item[0] == data[i]):
            item[1] += int(data[i+2])
            item[2] += 1
            exist = True
    if (not exist):
        output.append([data[i], int(data[i+2]), 1])
    i += 3

for i in range(len(output)):
    for j in range(i+1, len(output)):
        if (int(output[i][0]) > int(output[j][0])):
            output[i], output[j] = output[j], output[i]

if (len(output) == 0):
    print ("File kosong")
else:
    for item in (output):
        print(item[0] + "=" + "{:.2f}".format(item[1]/item[2]))
