/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 22 Oktober 2022
 * Topik praktikum: Pra Praktikum 7
 * Deskripsi: Implementasi palindrom.c
 */
 #include <stdio.h>
 #include "stack.h"

int main()
{
	infotype masukan;
	
	scanf("%d", &masukan);
	
	if (masukan == 0)
	{
		printf("Stack kosong\n");
	}
	else
	{
		Stack S1, S2, S3;
		CreateEmpty(&S1);
		CreateEmpty(&S2);
		CreateEmpty(&S3);
		
		infotype Elmt;
		int i = 0;
		while ((masukan != 0) && (!IsFull(S1)))
		{
			Push(&S1, masukan);
			Push(&S2, masukan);
			
			scanf("%d", &masukan);
		}
		
		while (i <= Top(S1))
		{
			Pop(&S2, &Elmt);
			Push(&S3, Elmt);
			i++;
		}
		
		boolean palindrom;
		palindrom = true;
		infotype temp1, temp3;
		
		while ((palindrom) && (!IsEmpty(S1)))
		{
			Pop(&S1, &temp1);
			Pop(&S3, &temp3);
			
			if (temp1 != temp3)
			{
				palindrom = false;
			}
		}
		
		if (palindrom)
		{
			printf("Palindrom\n");
		}
		else
		{
			printf("Bukan Palindrom\n");
		}
		
	}
	return 0;
}
