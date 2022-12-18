/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 19 September 2022
 * Topik praktikum: Praktikum 3
 * Deskripsi: Implementasi garis.h
 */
#include <stdio.h>
#include "jumlahkonsonanvokal.h"

char vowel[] = {'a','i','u','e','o','A','I','U','E','O','\0'};
int isAlphabet (char c);
int isVowel(char c);

void jumlahKonsonanVokal(char *str, int *kons, int *vok)
{
	while (*str != '\0') //*str sudah diassign ke karakter pertama suatu string
	{
		if (isAlphabet(*str))
		{
			if (isVowel(*str))
			{
				(*vok)++;
			}
			else
			{
				(*kons)++;
			}
		}
		str++;
	}
}

int isAlphabet(char c)
{
	return (c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z');
}

int isVowel(char c)
{
	char* it = vowel; //*it = vowel[0]
	
	while (*it != '\0') 
	{
		if (c == *it)
		{
			return 1;
		}
		it++;
	}
	return 0;
}
