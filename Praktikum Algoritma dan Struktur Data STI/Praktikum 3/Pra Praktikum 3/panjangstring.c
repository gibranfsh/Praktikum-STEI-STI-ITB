/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 19 September 2022
 * Topik praktikum: Pra Praktikum 3
 * Deskripsi: Program yang menghitung panjang string menggunakan pointer yang di-point ke address huruf pertama dari suatu string.
 */

#include <stdio.h>
#include <string.h>

int panjangString(char* strink) 
{	//char* strink = &m[0]
	int sum = 0;
	for (int i = 0; i < strlen(strink); i++) 
	{
		if (*(strink + i) != '\0') 
		{
			sum += 1;
		}
	}
	return sum;
}
