#NIM/Nama  : 16521125 / Gibran Fasha Ghazanfar
#Tanggal   : 27 Oktober 2021
#Deskripsi : Program yang menerima bilangan X dan akan menentukan apakah X adalah bilangan prima

n = int(input("Silakan masukan angka : "))
YaTuhanSemogaNilaiAkhirMatFisPengkomDllBisaMendapatkanIndeksADenganIPKlebihdari3koma7aamiinYaRabalAlaamiin = False

if n > 1:
    for i in range(2, n):
        if n % i == 0:
            YaTuhanSemogaNilaiAkhirMatFisPengkomDllBisaMendapatkanIndeksADenganIPKlebihdari3koma7aamiinYaRabalAlaamiin = True
            break


if YaTuhanSemogaNilaiAkhirMatFisPengkomDllBisaMendapatkanIndeksADenganIPKlebihdari3koma7aamiinYaRabalAlaamiin == True:
    print(n, "bukanlah bilangan prima")

elif YaTuhanSemogaNilaiAkhirMatFisPengkomDllBisaMendapatkanIndeksADenganIPKlebihdari3koma7aamiinYaRabalAlaamiin == False and n > 1: 
    print(n, "adalah bilangan prima")

else: #flag == False and n <= 1
    print(n, "bukanlah bilangan prima")