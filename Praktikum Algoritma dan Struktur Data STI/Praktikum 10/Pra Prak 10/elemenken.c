/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 12 November 2022
 * Topik praktikum: Pra Praktikum 10
 * Deskripsi: Implementasi template.c
 */

#include <stdio.h>
#include "listsirkuler.h"

int ElemenKeN(List L, int r){
    address p = First(L);
    int i = 0;
    while(i < r){
        p = Next(p);
        i++;
    } 
    return Info(p);
}

int main () {   
    List L;
    CreateEmpty(&L);
    int k, r;
    scanf("%d", &k);
    while(k != 0){
        InsVLast(&L, k);
        scanf("%d", &k);
    }
    scanf("%d", &r);
    if (!IsEmpty(L)){
         printf("%d\n", ElemenKeN(L, r));
    }
    else{
        printf("List Kosong\n");
    }
    return 0;
}
