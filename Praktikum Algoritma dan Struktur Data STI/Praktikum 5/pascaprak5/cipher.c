//NIM               : 18221047
//Nama              : Gibran Fasha Ghazanfar
//Tanggal           : 02 Oktober 2022
//Topik praktikum   : Pra praktikum 4 - anagramalstrukdat.c
//Deskripsi         : implementasi anagramalstrukdat.h

#include "mesinkarakterv2.h"
#include "mesinkata.h"
#include "boolean.h"
#include <stdio.h>

boolean endWord;
Word currentWord;
char currentChar;
boolean EOP;


int main(){
    STARTWORD();
    int i;
    int length = currentWord.Length % 26;
    if(!(endWord)){
        for (i=0;i<currentWord.Length;i++){
            if (currentWord.TabWord[i]+length > 'Z'){
                printf("%c",(currentWord.TabWord[i] + length - 26));
            }
            else{
                printf("%c",(currentWord.TabWord[i] + length));
            }
        }  
    }

    while((currentChar != MARK)){
        if (currentChar == BLANK){
            printf("%c",' ');
        }
        else{
            if (currentChar+length > 'Z'){
                printf("%c",(currentChar + length - 26));
            }
            else{
                printf("%c",(currentChar + length));
            }
        }
        ADV();
    }
    printf(".\n");
    return 0;
}