/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 5 November 2022
 * Topik praktikum: Pra Praktikum 9
 * Deskripsi: Implementasi listlinier.h
 */

#include <stdlib.h>
#include "OddEvenList.h"

void OddEvenList(List L, List *Odd, List *Even)
    /* Memisahkan elemen ganjil dan genap dari list L ke dalam dua list baru secara mengurut membesar*/
    /* I.S: List L TIDAK mungkin kosong dan memiliki nilai lebih dari sama dengan 0(value>=0), List Odd dan Even kosong*/
    /* F.S: List Odd memiliki elemen bernilai ganjil mengurut membesar, List Even memiliki elemen bernilai genap mengurut membesar
            List L TIDAK PERLU DIDEALOKASI*/
    /*Contoh:
        Input:
            L: [0,3,1,4,5]
            Odd: []
            Even: []
        Output:
            L: [0,3,1,4,5]
            Odd: [1,3,5]
            Even: [0,4] */
    /*Note: 
        1. Bilangan 0 merupakan bilangan genap
        2. Buatlah List Odd dan Even terlebih dahulu*/

{
	List ganjil;
	List genap;
	
	CreateEmpty(&ganjil);
	CreateEmpty(&genap);
	CreateEmpty(Odd);
	CreateEmpty(Even);
	
	address p = First(L);
	
	while (p != Nil)
	{
		if (p->info % 2 == 0)
		{
			InsVLast(&genap, p->info);
			
		}
		else
		{
			InsVLast(&ganjil, p->info);
		}
		p = p->next;
	}
	
	while (!IsEmpty(ganjil))
	{
		InsVLast(Odd, Min(ganjil));
		DelP(&ganjil, Min(ganjil));
	}
	
	while (!IsEmpty(genap))
	{
		InsVLast(Even, Min(genap));
		DelP(&genap, Min(genap));
	}
}
