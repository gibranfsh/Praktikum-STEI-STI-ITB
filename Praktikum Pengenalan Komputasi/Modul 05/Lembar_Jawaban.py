print("Ukuran Matriks")
baris = int(input("Baris = "))
kolom = int(input("Kolom = "))

matriks = [[0 for j in range(kolom)] for i in range(baris)]

for i in range(baris):
    for j in range(kolom):
        matriks[i][j] = int(input("Elemen [" + str(i+1) + "," + str(j+1) + "] = "))

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end="\t")
    print("")

barishapus = int(input("Indeks baris dihapus = "))
kolomhapus = int(input("Indeks kolom dihapus = "))

submatriks = [[0 for j in range(kolom)] for i in range(baris)]
for i in range(barishapus, baris-1):
    for j in range(kolomhapus):
        submatriks[i][j] = matriks[i+1][j]

for i in range(baris):
    for j in range(kolomhapus, kolom-1):
        submatriks[i][j] = submatriks[i][j+1]

for i in range(baris-1):
    for j in range(baris-1):
        print(submatriks[i][j], end="\t")
    print("")