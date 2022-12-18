/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 30 September 2022
 * Topik praktikum: Pra Praktikum 5
 * Deskripsi: Implementasi fungsi hitungkarakter
 */
 
#include <stdio.h>
#include "mesinkarakter.h"

int hitungkarakter(char karakter)
{
	int sum = 0;
	
	START();
	while (GetCC() != MARK)
	{
		if (GetCC() == karakter)
		{
			sum++;
		}
		ADV();
	}
	return sum;
}
