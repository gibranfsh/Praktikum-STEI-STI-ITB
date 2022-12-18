# Program SortSiswa
# Spesifikasi : ....
import tulisdata

# KAMUS
# namafile: string
def insertionSort(arr):
    for x in range(1, len(arr)):
        y = arr[x]
        i = x - 1
        while i >= 0 and y[0] < arr[i][0]:
            arr[i+1] = arr[i]
            i -= 1
        arr[i+1] = y

# ALGORITMA PROGRAM UTAMA
namafile = input()
tulisdata.TulisDataSiswa(namafile)

f = open(namafile, 'r')
list_line = []

line1 = f.readline()
if line1 == "99999999":
    print("File kosong")
else:
    while line1 != "99999999":
        line2 = f.readline()
        line3 = f.readline()
        tuple = (int(line1), line2, int(line3))
        list_line.append(tuple)
        line1 = f.readline()

    insertionSort(list_line)
    for i in range(len(list_line)):
        print(list_line[i][0], end = ",")
        print(list_line[i][1].rstrip(), end = ',')
        print(list_line[i][2])

f.close()
