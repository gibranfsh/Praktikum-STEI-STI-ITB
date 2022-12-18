/*
 *Nama : Gibran Fasha Ghazanfar
 * NIM : 18221069
 * Tanggal : 14 November 2022
 * Deskripsi : implementasi queuelist.h
 * */	

#include <stdio.h>
#include "queuelist.h"

/* Prototype manajemen memori */
void Alokasi(address *P, infotype X)
/* I.S. Sembarang */
/* F.S. Alamat P dialokasi, jika berhasil maka Info(P)=X dan
        Next(P)=Nil */
/*      P=Nil jika alokasi gagal */
{
    *P = (address) malloc(sizeof(ElmtQueue));
    if (*P != Nil)
    {
        Info(*P) = X;
        Next(*P) = Nil;
    }
}

void Dealokasi(address P)
/* I.S. P adalah hasil alokasi, P != Nil */
/* F.S. Alamat P didealokasi, dikembalikan ke sistem */
{
	free(P);
}

boolean IsEmpty(Queue Q)
{
    return (Head(Q) == Nil && Tail(Q) == Nil);
}
/* Mengirim true jika Q kosong: HEAD(Q)=Nil and TAIL(Q)=Nil */

int NbElmt(Queue Q)
{
    int count = 0;
    address P = Head(Q);
    while (P != Nil)
    {
        count++;
        P = Next(P);
    }
    return count;
}
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong */

/*** Kreator ***/
void CreateEmpty(Queue *Q)
{
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}
/* I.S. sembarang */
/* F.S. Sebuah Q kosong terbentuk */

/*** Primitif Add/Delete ***/
void Enqueue(Queue *Q, infotype X)
{
    address P;
    Alokasi(&P, X);
    if (P != Nil)
    {
        if (IsEmpty(*Q))
        {
            Head(*Q) = P;
            Tail(*Q) = P;
        }
        else
        {
            Next(Tail(*Q)) = P;
            Tail(*Q) = P;
        }
    }
}

void Dequeue(Queue *Q, infotype *X) {
    address P;
    if (!IsEmpty(*Q))
    {
        *X = InfoHead(*Q);
        P = Head(*Q);
        Head(*Q) = Next(Head(*Q));
        if (Head(*Q) == Nil)
        {
            Tail(*Q) = Nil;
        }
        Dealokasi(P);
    }
}


