/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 19 September 2022
 * Topik praktikum: Praktikum 3
 * Deskripsi: Implementasi garis.h
 */


#include <stdio.h>
#include "garis.h"
#include <math.h>

void MakeGARIS(POINT P1, POINT P2, GARIS *L)
{
	(*L).PAw = P1;
	(*L).PAkh = P2;
	
}
void BacaGARIS(GARIS *L)
{	
	POINT P1, P2;
	
	scanf("%f %f\n", &((P1).X), &((P1).Y));
	scanf("%f %f\n", &((P2).X), &((P2).Y));
	
	while ((P1.X == P2.X) && (P1.Y == P2.Y))
	{
		printf("Garis tidak valid\n"); //awalnya salah di pemberian newline \n
		scanf("%f %f\n", &((P1).X), &((P1).Y)), &((P2).X), &((P2).Y);
		scanf("%f %f\n", &((P2).X), &((P2).Y));
	}
	MakeGARIS(P1, P2, L);

}
void TulisGARIS(GARIS L)
{
	printf("((%.2f,%.2f),(%.2f,%.2f))", (L).PAw.X, (L).PAw.Y, (L).PAkh.X, (L).PAkh.Y);
}

/* *** Kelompok operasi garis *** */
float PanjangGARIS(GARIS L)
/* Menghitung panjang garis L : berikan rumusnya */
{
	return Panjang((L).PAw, (L).PAkh);
}

float Gradien(GARIS L)
{
	return (((L).PAkh.Y-(L).PAw.Y)/((L).PAkh.X-(L).PAw.X));
}

/* *** Kelompok predikat *** */
boolean IsTegakLurus(GARIS L1, GARIS L2)
{
	return (Gradien(L1) * Gradien(L2) == -1);
}

boolean IsSejajar(GARIS L1, GARIS L2)
{
	return (Gradien(L1) == Gradien(L2));
}

