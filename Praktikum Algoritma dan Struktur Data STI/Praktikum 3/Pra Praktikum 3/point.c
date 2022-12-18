/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 19 September 2022
 * Topik praktikum: Pra Praktikum 3
 * Deskripsi: Implementasi point.h
 */
 
#include <stdio.h>
#include "point.h"
#include <math.h>

POINT MakePOINT (float X, float Y)
{	
	POINT P;
	(P).X = X;
	(P).Y = Y;
	
	return P;
}

void BacaPOINT (POINT * P)
{	float a, b;
	scanf("%f %f", &a, &b);
	*P = MakePOINT(a, b);
}

void TulisPOINT (POINT P)
{
	printf("(%.2f,%.2f)", (P).X, (P).Y);
}

boolean EQ (POINT P1, POINT P2)
{
	return (P1.X == P2.X && P1.Y == P2.Y);
}

boolean NEQ (POINT P1, POINT P2)
{
	return (P1.X != P2.X || P1.Y != P2.Y);
}

boolean IsOrigin (POINT P)
{
	return (P.X == 0 && P.X == 0);
}

boolean IsOnSbX (POINT P)
{
	return (P.Y == 0);
}

boolean IsOnSbY (POINT P)
{
	return (P.X == 0);
}

int Kuadran (POINT P)
{	int a;
	
	if( P.X > 0 && P.Y > 0)
	  a = 1;
	else if( P.X < 0 && P.Y > 0)
	  a = 2;
	else if( P.X < 0 && P.Y < 0)
	  a = 3;
	else if( P.X > 0 && P.Y < 0)
	  a = 4;
	  
	return a;
}

POINT PlusDelta (POINT P, float deltaX, float deltaY)
{
	float a, b;
	a = P.X + deltaX;
	b = P.Y + deltaY;
	return (MakePOINT(a,b));
}

void Geser (POINT *P, float deltaX, float deltaY)
{
	(*P).X += deltaX;
	(*P).Y += deltaY;
}

float Jarak0 (POINT P)
{
	return sqrt(P.X*P.X + P.Y*P.Y);
}

float Panjang (POINT P1, POINT P2)
{
	return sqrt((P1.X-P2.X)*(P1.X-P2.X) + (P1.Y-P2.Y)*(P1.Y-P2.Y));
}

