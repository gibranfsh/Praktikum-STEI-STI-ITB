
/* Deskripsi : Bahasa G */

#include <stdio.h>
#include "mesin_kata.h"
#include "mesin_kar.h"

void printKata(Kata kata){
 int i;
 for(i = 1; i <= kata.Length; i++){
  printf("%c", kata.TabKata[i]);
  if(kata.TabKata[i] == 'a' || kata.TabKata[i] == 'e' || kata.TabKata[i] == 'i' || kata.TabKata[i] == 'o' || kata.TabKata[i] == 'u'){
   printf("g%c", kata.TabKata[i]);
    }
 }
}

void printKata(Kata kata);

int main() {
  STARTKATA();
  while (!EndKata) {
    printKata(CKata);
    ADVKATA();
    if(!EndKata){
  printf(" ");
 }
  }
  printf("\n");
  return 0;
}
