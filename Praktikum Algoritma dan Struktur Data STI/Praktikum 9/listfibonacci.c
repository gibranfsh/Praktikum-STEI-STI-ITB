 /*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 7 November 2022
 * Topik praktikum: Praktikum 9
 * Deskripsi: Implementasi listfibonacci.h
 */
 
#include <stdio.h>
#include "listlinier.h"
int main() {
    List fibonacci;
    CreateEmpty(&fibonacci);

    infotype el;
    scanf("%d", &el);

    // Masukkan kode program disini

    if (el == 0) {
        // Masukkan kode program disini
        
        PrintInfo(fibonacci);
        return 0;
    } else if (el == 1) {
        // Masukkan kode program disini
        int angka;
        scanf("%d", &angka);
        InsVLast(&fibonacci, angka);
        PrintInfo(fibonacci);
        return 0;
    } else {
        // Masukkan kode program disini
        int angka1, angka2, angka3;
        scanf("%d%d", &angka1, &angka2);
        InsVLast(&fibonacci, angka1);
        InsVLast(&fibonacci, angka2);

        int i;
        for(i = 2; i < el; i++)
        {
            angka3 = angka1 + angka2;
            InsVLast(&fibonacci, angka3);
            angka1 = angka2;
            angka2 = angka3;
        }

        PrintInfo(fibonacci);
        return 0;
    }

    return 0;
}




