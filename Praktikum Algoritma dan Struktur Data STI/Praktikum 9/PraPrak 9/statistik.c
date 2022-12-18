/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 5 November 2022
 * Topik praktikum: Pra Praktikum 9
 * Deskripsi: Implementasi listlinier.h
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "listlinier.h"

int main ()
{
	List L;
	CreateEmpty(&L);
	
	infotype a;
	
	scanf("%d", &a);
	
	
	if (a < 0 || a > 100)
	{
		printf("Daftar nilai kosong\n");
	}
	else
	{
		address p;
		while (a >= 0 && a <= 100)
		{
			p = Alokasi(a);
			InsertLast(&L, p); //Bisa juga InsertVLast, kalo pake itu, kita gak harus ngealokasiin infotypenya terlebih dahulu.
			scanf("%d", &a);
		}
		printf("%d\n", NbElmt(L));
		printf("%d\n", Max(L));
		printf("%d\n", Min(L));
		printf("%.2f\n", Average(L)); 
		PrintInfo(L);
		printf("\n");
		InversList(&L);
		PrintInfo(L);
		printf("\n");
	}
	return 0;
}
