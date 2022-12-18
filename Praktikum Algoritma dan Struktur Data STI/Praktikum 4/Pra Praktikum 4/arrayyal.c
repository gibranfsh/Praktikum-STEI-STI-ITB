//yal

#include <stdio.h>
#include "array.h"
#include "boolean.h"

void MakeEmpty (TabInt *T)
{
    (*T).Neff = 0;
    (*T).TI [IdxMax - IdxMin+1];
}
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */

int NbElmt (TabInt T)
{
    return T.Neff;
}
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* *** Daya tampung container *** */
int MaxNbEl (TabInt T)
{
    return IdxMax;
}
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
IdxType GetFirstIdx (TabInt T)
{
    return IdxMin;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
IdxType GetLastIdx (TabInt T)
{
    return T.Neff;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
/* *** Menghasilkan sebuah elemen *** */
ElType GetElmt (TabInt T, IdxType i)
{
    return T.TI[i];
}
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */

void SetTab (TabInt Tin, TabInt *Tout)
{
    (*Tout) = Tin;
}
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
void SetEl (TabInt *T, IdxType i, ElType v)
{
    (*T).TI[i] = v;
    (*T).Neff ++;
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
void SetNeff (TabInt *T, IdxType N)
{
    (*T).Neff = N;
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */

boolean IsIdxValid (TabInt T, IdxType i)
{
    return ((i >= IdxMin)&&(i <= IdxMax));
}
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
boolean IsIdxEff (TabInt T, IdxType i)
{
    return ((i >= GetFirstIdx(T))&&(i <= GetLastIdx(T)));
}

/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */

boolean IsEmpty (TabInt T)
{
    return (NbElmt(T) == 0);
}
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T)
{
    return (NbElmt(T) == MaxNbEl(T));
}
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */

void TulisIsi (TabInt T)
{
    if (IsEmpty(T))
    {
        printf("Tabel kosong\n");
    } else
    {
        int i;
        for (i = GetFirstIdx(T); i <= GetLastIdx(T); i++)
        {
            printf("%d:%d\n", i, GetElmt(T,i));
        }
    }
}
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah */
/* Jika isi tabel [1,2,3] maka akan diprint
0:1
1:2
2:3
*/
/* Jika T kosong : Hanya menulis "Tabel kosong" */

TabInt PlusTab (TabInt T1, TabInt T2)
{
    TabInt T;
    int i;
    for ( i = IdxMin; i <= T1.Neff; i++)
    {
       (T).TI[i] = GetElmt(T1,i) + GetElmt(T2,i); 
    }
    T.Neff = T1.Neff;
    return T;
}
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 + T2 */
TabInt MinusTab (TabInt T1, TabInt T2)
{
    TabInt T;
    (T).Neff = T1.Neff;     
    int i;
    for(i=GetFirstIdx(T1);i<=GetLastIdx(T1);i++) {
        (T).TI[i] = GetElmt(T1,i) - GetElmt(T2,i); 
	}
	
	return(T);
}
/* Prekondisi : T1 dan T2 berukuran sama dan tidak kosong */
/* Mengirimkan T1 - T2 */

ElType ValMax (TabInt T)
{
    ElType max;
    int i;
    max = T.TI[IdxMin];
    for ( i = IdxMin; i <= T.Neff; i++)
    {
        if (T.TI[i] > max) 
        {
            max = T.TI[i];
        }
    }

    return max;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai maksimum tabel */

ElType ValMin (TabInt T)
{
    ElType min;
    int i;
    min = T.TI[IdxMin];
    for ( i = IdxMin; i <= T.Neff; i++)
    {
        if (T.TI[i] < min) 
        {
            min = T.TI[i];
        }
    }

    return min;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai minimum tabel */

IdxType IdxMaxTab (TabInt T)
{
    IdxType maxidx;
    int i;
    maxidx = IdxMin;
    for ( i = IdxMin; i <= T.Neff; i++)
    {
        if (T.TI[i] > T.TI[maxidx]) 
        {
            maxidx = i;
        }
    }

    return maxidx;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks i dengan elemen ke-i adalah nilai maksimum pada tabel */

IdxType IdxMinTab (TabInt T)
{
    IdxType minidx;
    int i;
    minidx = IdxMin;
    for ( i = IdxMin; i <= T.Neff; i++)
    {
        if (T.TI[i] < T.TI[minidx]) 
        {
            minidx = i;
        }
    }

    return minidx;
}
/* Prekondisi : Tabel tidak kosong */
/* Mengirimkan indeks i */
/* dengan elemen ke-i nilai minimum pada tabel */
