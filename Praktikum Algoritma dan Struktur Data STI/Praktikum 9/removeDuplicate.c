/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 7 November 2022
 * Topik praktikum: Praktikum 9
 * Deskripsi: Implementasi removeDuplicate.h
 */

#include <stdio.h>
#include <stdlib.h>
#include "removeDuplicate.h"

List removeDuplicate(List l)
/*
    Diberikan sebuah list linier yang sudah terurut membesar,
    kembalikan list baru yang elementnya unik
    Contoh input/output:
    input:  [1,1,2,2,3,4,5,6,6,7]
    output: [1,2,3,4,5,6,7]

    input:  [1,1,1,1,1,1]
    output: [1]
*/
 {
	 address P = First(l);
	 List hasil;
	 CreateEmpty(&hasil);
	 
	 int i;
	 for (i = 0; i < NbElmt(l); i++){
		if (Search(hasil, Info(P)) == Nil){
			address PP;
			PP = Alokasi(Info(P));
			InsertLast(&hasil, PP);
		}
		P = Next(P);
	}
	return hasil;
}
