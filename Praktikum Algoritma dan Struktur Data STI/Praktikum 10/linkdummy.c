/*
 *Nama : Gibran Fasha Ghazanfar
 * NIM : 18221069
 * Tanggal : 14 November 2022
 * Deskripsi : implementasi linkdummy.h
 * */	
 
 #include <stdio.h>
 #include "linkdummy.h"
 
/* PROTOTYPE */
/****************** TEST LIST KOSONG ******************/
boolean IsEmpty(List L)
/* Mengirim true jika list kosong: First(L) = dummy@
dan Last(L) = dummy@ */
{
	return (First(L) == Last(L));
}
/****************** PEMBUATAN LIST KOSONG ******************/
void MakeEmpty(List *L)
/* I.S. sembarang */
/* F.S. Terbentuk list L kosong, dengan satu elemen dummy */
/* Jika gagal maka First = Last = Nil dan list gagal terbentuk */
{
	address pDummy;

	pDummy = Alokasi(0); /* INFO(pDummy) tidak didefinisikan */
	if (pDummy != Nil)
	{
		First(*L) = pDummy;
		Last(*L) = pDummy;
	} 
	else /* List gagal terbentuk */
	{
		First(*L) = Nil;
		Last(*L) = Nil;
	}
}

/****************** MANAJEMEN MEMORI ******************/
address Alokasi (ElType X)
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil. */
/* Misalnya: menghasilkan P, maka Info(P)=X, Next(P)=Nil, Prev(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil. */
{
	address P;
	P = (address) malloc(sizeof(Node));
    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}
void Dealokasi (address P)
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */
{
	free(P);
}

/****************** SEARCHING ******************/
address Search(List L, ElType X)
/* Mencari apakah ada node list dengan info(P) = X */
/* Jika ada, mengirimkan address node tersebut. */
/* Jika tidak ada, mengirimkan Nil */
{
	address p;
	p = First(L);
	
	while (p != Nil && p->info != X)
	{
		p = p->next;
	}
	return p;
}

/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsertFirst(List *L, ElType X)
/* I.S. List L terdefinisi */
/* F.S. Menambahkan elemen X sebagai elemen pertama List L */
{
	address p;
	
	/* Algoritma */
	p = Alokasi(X);
	if (p != Nil)
	{
		Next(p) = First(*L);
		First(*L) = p;
	}
}
void InsertLast(List *L, ElType X)
/* I.S. List L terdefinisi */
/* F.S. X ditambahkan sebagai elemen terakhir yang baru, */
/* yaitu menjadi elemen sebelum elemen dummy */
/* Alamat elemen dummy tidak berubah */
{
	address p, last;
	
	/* Algoritma */
	if (IsEmpty(*L))
	{
		InsertFirst(L, X);
	} 
	else
	{
		p = Alokasi(X);
		if (p != Nil)
		{
			last = First(*L);
			while (Next(last) != Last(*L))
			{
				last = Next(last);
			} /* NEXT(last) == LAST(*l) alias dummy */
			Next(last) = p;
			Next(p) = Last(*L);
		}
	}
}

/*** PENGHAPUSAN ELEMEN ***/
void DeleteFirst(List *L, ElType *X)
/* I.S. List tidak kosong */
/* F.S. X adalah elemen pertama list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
{
	address p;
	
	/* Algoritma */
	p = First(*L);
	*X = Info(p);
	First(*L) = Next(First(*L));
	Dealokasi(p);
}
void DeleteLast(List *L, ElType *X)
/* I.S. List tidak kosong */
/* F.S. X adalah terakhir sebelum dummy pada list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */
{
	address last, precLast;
	
	/* Algoritma */
	last = First(*L);
	precLast = Nil;
	
	while (Next(last) != Last(*L)) 
	{
		precLast = last;
		last = Next(last);
	}
	*X = last->info;
	
	if (precLast == Nil)
	{ /* kasus satu elemen */
		First(*L) = Last(*L);
	} 
	else
	{
		Next(precLast) = Last(*L);
	}
	
	Dealokasi(last);
}
