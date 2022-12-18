/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 24 September 2022
 * Topik praktikum: Pra Praktikum 4
 * Deskripsi: Implementasi list.h
 */

/* Indeks yang digunakan seberapa banyak memori itu terisi */
/* Jika L adalah List, cara deklarasi dan akses: */
/* Deklarasi: L : List */
/* Maka cara akses:
 * L.A untuk mengakses seluruh nilai elemen list
 * L.A[i] untuk mengakses elemen ke-i */

#include "list.h"
#include <stdio.h>
/* ********** KONSTRUKTOR ********** */
/* Konstruktor: create list kosong */
List MakeList()
/* I.S. sembarang */
/* F.S. Terbentuk list L kosong dengan kapasitas MaxEl */
{
	List L;
	IdxType i;
	for (i = 0; i <= (MaxEl-1); i++){
		L.A[i] = Mark;
	}
	return L;
}

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test list kosong *** */
boolean IsEmpty(List L)
/* Mengirimkan true jika list L kosong, mengirimkan false jika tidak */
{
	boolean found;
	found = 0;
	IdxType i;

	i = 0;
	do{
		if (L.A[i] != Mark){
			found = 1;
		}else{
			i++;
		}

	}while ((found == 0) && (i <= (MaxEl-1)));
	return !found;
}

/* *** Menghasilkan sebuah elemen *** */
ElType Get(List L, IdxType i)
/* Prekondisi : list tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen list yang ke-i */
{
    return L.A[i];
}

/* *** Selektor SET : Mengubah nilai list dan elemen list *** */
void Set(List *L, IdxType i, ElType v)
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
{
    (*L).A[i] = v;
}

/* ********** SELEKTOR ********** */
/* *** Banyaknya elemen *** */
int Length(List L)
/* Mengirimkan banyaknya elemen efektif list */
/* Mengirimkan nol jika list kosong */
{
	if (IsEmpty(L)){
		return 0;
	}
	else{
		IdxType i;
		i = 0;
		do{
			i++;
		}while((L.A[i] != Mark) && (i <= MaxEl-1));

		return i;
	}
}
/* *** Selektor INDEKS *** */
IdxType FirstIdx(List L)
/* Prekondisi : list L tidak kosong */
/* Mengirimkan indeks elemen pertama */
{
    return 0;
}
IdxType LastIdx(List L)
/* Prekondisi : list L tidak kosong */
/* Mengirimkan indeks elemen terakhir */
{
    return (Length(L)-1);
}
/* ********** Test Indeks yang valid ********** */
boolean IsIdxValid (List L, IdxType i)
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran list */
/* yaitu antara indeks yang terdefinisi untuk container*/
{
    return ((i>=0)&&(i<=(MaxEl-1)));
}
boolean IsIdxEff (List L, IdxType i)
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk list */
/* yaitu antara FirstIdx(L)..LastIdx(L) */
{
    return ((i >= 0) && (i <= (LastIdx(L))));
}
/* ********** Operasi-operasi ********** */
boolean Search(List L, ElType X)
/* Prekondisi : X sembarang */
/* Mengirimkan true jika terdapat elemen X di dalam list */
/* yaitu antara FirstIdx(L)..LastIdx(L) */
{
    IdxType i;
	boolean ketemu;

	i = 0;
	ketemu = 0;

	while ((ketemu == 0) && (i<=LastIdx(L))){
		if (L.A[i] == X){
			ketemu = 1;
		}
		else{
			i++;
		}
	}
	return ketemu;
}

void InsertFirst(List *L, ElType X)
/* I.S. L terdefinisi, mungkin kosong. */
/* F.S. v menjadi elemen pertama L. */
{
  IdxType i;
  if (IsEmpty((*L))){
    (*L).A[0]=X;
  }
  else{
    for (i=LastIdx(*L);i>=FirstIdx((*L)); i--){
        (*L).A[i+1]=(*L).A[i];
    }
    (*L).A[0]=X;
  }
}

void InsertAt(List *L, ElType X, IdxType i)
/* I.S. L terdefinisi, tidak kosong, i merupakan indeks lojik yang valid di L. */
/* F.S. v disisipkan dalam L pada indeks ke-i (bukan menimpa elemen di i). */
{
    IdxType j;
    for (j=(LastIdx(*L));j>=i; j--){
        (*L).A[j+1]=(*L).A[j];
    }
    (*L).A[i]=X;
}
void InsertLast(List *L, ElType X)
/* I.S. L terdefinisi, mungkin kosong. */
/* F.S. v menjadi elemen terakhir L. */
{
    if (IsEmpty((*L))){
    (*L).A[0]=X;
    }
    else{
    int j;
    j = Length((*L));
    (*L).A[j]=X;
  }
}
void DeleteFirst(List *L)
{
	IdxType i;
	IdxType a = LastIdx(*L);
	for (i=0; i<a;i++){
			(*L).A[i]=(*L).A[i+1];
		}
		(*L).A[a]=Mark;
}

void DeleteAt(List *L, IdxType i)
{
	IdxType j;
	IdxType a = LastIdx(*L);

	for (j=i; j<a; j++){
		(*L).A[j] = (*L).A[j+1];
	}
	(*L).A[a]=Mark;
}

void DeleteLast(List *L)
{
	IdxType i;
	i = LastIdx(*L);

	(*L).A[i]=Mark;
}

List Concat(List L1, List L2)
{
 List L3;
 MakeList(L3);
 IdxType i;
 IdxType index = 0;
 for (i = 0; i <= (LastIdx(L1)); i++ ){
  L3.A[index] = L1.A[i];
  index++;
 }

 for (i = 0; i <= (LastIdx(L2)); i++ ){
  L3.A[index] = L2.A[i];
  index++;
 }

 return L3;

}
