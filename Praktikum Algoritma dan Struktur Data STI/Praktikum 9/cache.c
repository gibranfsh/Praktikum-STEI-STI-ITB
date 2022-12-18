 /*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 7 November 2022
 * Topik praktikum: Praktikum 9
 * Deskripsi: Implementasi cache.c
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include "listlinier.h"
 
 int main()
 {
	 List L;
	 CreateEmpty(&L);
	 
	 address p;
	 infotype N, i, j, x, t;
	 int Q;
	 
	 scanf("%d", &N);
	 
	 for (i = 1; i <= N; i++)
	 {
		 InsVLast(&L, i); 
	 }
	
	 scanf("%d", &Q);
	 
	 for (j = 0; j < Q; j++)
	 {
		 scanf("%d", &x);
		 p = Search(L, x);
		 t = x;
		 
		 if (p != Nil) //x ada di list
		 {
			 DelP(&L, t);
			 InsVFirst(&L, x);
			 printf("hit ");
			 PrintInfo(L);
			 printf("\n");
			 
		 }
		 else //x gak ada di list
		 {
			 DelVLast(&L, &t);
			 InsVFirst(&L, x);
			 printf("miss ");
			 PrintInfo(L);
			 printf("\n");
		 }
	 }
	 
	 return 0;
 }

