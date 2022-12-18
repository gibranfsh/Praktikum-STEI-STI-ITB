/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 24 September 2022
 * Topik praktikum: Pra Praktikum 4
 * Deskripsi: Implementasi array.h
 */
#include <stdio.h>
#include "array.h"

/* Indeks yang digunakan [IdxMin..IdxMax] */
/* Jika T adalah TabInt, cara deklarasi dan akses: */
/* Deklarasi : T : TabInt */
/* Maka cara akses:
 * T.Neff untuk mengetahui banyaknya elemen
 * T.TI untuk mengakses seluruh nilai elemen tabel
 * T.TI[i] untuk mengakses elemen ke-i */
/* Definisi :
 * Tabel kosong: T.Neff = 0
 * Definisi elemen pertama : T.TI[i] dengan i=1
 * Definisi elemen terakhir yang terdefinisi: T.TI[i] dengan i=T.Neff */

/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create tabel kosong */
void MakeEmpty (TabInt *T)
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */
{
    T->Neff = 0; // (*T).Neff
}

/* ********** SELEKTOR ********** */

/* *** Banyaknya elemen *** */
int NbElmt (TabInt T)
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
{
		return T.Neff;
}
/* *** Daya tampung container *** */
int MaxNbEl (TabInt T)
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
{
	return IdxMax;
}

/* *** Selektor INDEKS *** */
IdxType GetFirstIdx (TabInt T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
{
	return IdxMin;
}

IdxType GetLastIdx (TabInt T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
/* *** Menghasilkan sebuah elemen *** */
{
	return T.Neff;
}

ElType GetElmt (TabInt T, IdxType i)
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */
{
	return T.TI[i];
}

/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */

/* Untuk type private/limited private pada bahasa tertentu */
void SetTab (TabInt Tin, TabInt *Tout)
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
{
	*Tout = Tin;
}
void SetEl (TabInt *T, IdxType i, ElType v)
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
{
	T->TI[i] = v;
	T->Neff++;
}
void SetNeff (TabInt *T, IdxType N)
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */
{
	T->Neff = N;
}

/* ********** Test Indeks yang valid ********** */
boolean IsIdxValid (TabInt T, IdxType i)
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
{
	return ((i <= IdxMax) && (i >= IdxMin)); //beda
}
boolean IsIdxEff (TabInt T, IdxType i)
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */
{
	return ((GetFirstIdx(T) <= i) && (GetLastIdx(T) >= i));
}

/* ********** TEST KOSONG/PENUH ********** */

/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T)
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
{
	return (NbElmt(T) == 0);
}
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T)
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
{
	return (NbElmt(T) == MaxNbEl(T));
}
/* ********** BACA dan TULIS dengan INPUT/OUTPUT device ********** */
void TulisIsi (TabInt T)
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah */
/* Jika isi tabel [1,2,3] maka akan diprint
0:1
1:2
2:3
*/
/* Jika T kosong : Hanya menulis "Tabel kosong" */
{
	if (IsEmpty(T))
	{
		printf("Tabel kosong\n"); //Hati" cek pake newline atau enggak
	}
	else
	{
		for (int i = GetFirstIdx(T); i <= GetLastIdx(T); i++)
		{
			printf("%d:%d\n", i, GetElmt(T,i));
		}
	}
}

/* ********** OPERATOR ARITMATIKA ********** */

/* *** Aritmatika tabel : Penjumlahan, pengurangan, perkalian, ... *** */
TabInt PlusTab (TabInt T1, TabInt T2)
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 + T2 */
{	TabInt T;
    int i;
    for ( i = IdxMin; i <= T1.Neff; i++)
    {
       (T).TI[i] = GetElmt(T1,i) + GetElmt(T2,i); 
    }
    T.Neff = T1.Neff;
    return T;
  
}
TabInt MinusTab (TabInt T1, TabInt T2)
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 - T2 */
{
	TabInt T;
    (T).Neff = T1.Neff;     
    int i;
    for(i=GetFirstIdx(T1);i<=GetLastIdx(T1);i++) {
        (T).TI[i] = GetElmt(T1,i) - GetElmt(T2,i); 
	}
	
	return(T);
}

/* ********** NILAI EKSTREM ********** */
ElType ValMax (TabInt T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai maksimum tabel */
{
	ElType max = T.TI[IdxMin];
	for (int i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i] > max)
		{
			max = T.TI[i];
		}
	}
	return max;
}

ElType ValMin (TabInt T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai minimum tabel */
{
	ElType min = T.TI[IdxMin];
	for (int i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i] < min)
		{
			min = T.TI[i];
		}
	}
	return min;
}

/* *** Mengirimkan indeks elemen bernilai ekstrem *** */
IdxType IdxMaxTab (TabInt T)
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks i dengan elemen ke-i adalah nilai maksimum pada tabel */
{
	IdxType max = T.TI[IdxMin];
	IdxType maxindex = IdxMin;
	for (int i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i] > max)
		{
			max = T.TI[i];
			maxindex = i;
		}
	}
	return maxindex;
}
IdxType IdxMinTab (TabInt T)
/* Prekondisi : Tabel tidak kosong */
/* Mengirimkan indeks i */
/* dengan elemen ke-i nilai minimum pada tabel */
{
	IdxType min = T.TI[IdxMin];
	IdxType minindex = IdxMin;
	for (int i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i] < T.TI[IdxMin])
		{
			min = T.TI[i];
			minindex = i;
		}
	}
	return minindex;
}
