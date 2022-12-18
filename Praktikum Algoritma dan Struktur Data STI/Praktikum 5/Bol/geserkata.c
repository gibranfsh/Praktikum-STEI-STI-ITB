
/* Deskripsi : Geser Kata ke Kiri Sebanyak X */


#include <stdio.h>
#include "mesin_kata.h"
#include "mesin_kar.h"

void geserKata(Kata (*kata));

int main(){
    int x, i, j;
    scanf("%d\n", &x);
    IgnoreBlank();
    STARTKATA();
    Kata Temp;
    j=0;
    while (!EndKata){
        Temp = CKata;
        if (x > 0){
            for (i = 1; i <= x; i++){
                geserKata(&Temp);
            }
        }

        for(i = 1; i <= Temp.Length; i++){
            printf("%c", Temp.TabKata[i]);
        }
        ADVKATA();
        if (!EndKata){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

void geserKata(Kata (*kata)){
    int i, j;
    Kata Temp;
    Temp.Length = (*kata).Length;
    j = (*kata).Length;
    Temp.TabKata[j] = (*kata).TabKata[1];
    for (i = 1; i < (*kata).Length; i++){
        Temp.TabKata[i] = (*kata).TabKata[i+1];
    }
    (*kata) = Temp;
}
