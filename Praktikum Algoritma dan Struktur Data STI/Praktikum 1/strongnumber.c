/* NIM : 18221069
 * NAMA : Gibran Fasha Ghazanfar
 * TANGGAL : 12 September 2022
 * TOPIK : Array
 * DESKRIPSI : Menghitung average dari elemen-elemen array yang dimasukan user
 * */
#include<stdio.h>
int main(){
   int n,i;
   int fact,rem;
   scanf("%d",&n);
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,fact = 1;
      rem = n % 10;
      while(i <= rem){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      n = n / 10;
   }
   if(sum == temp)
      printf("Y\n");
   else
      printf("N\n");
   return 0;
}


