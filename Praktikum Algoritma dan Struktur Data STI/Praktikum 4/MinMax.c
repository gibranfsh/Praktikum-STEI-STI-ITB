/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 24 September 2022
 * Topik praktikum: Praktikum 4
 * Deskripsi: Implementasi arrayMhs.h
 */
 
#include <stdio.h>
#include "MinMax.h"

List MinMax(List L) {
    ElType nilaiMin = L.A[FirstIdx(L)];
    IdxType idxNilaiMin = FirstIdx(L);
    IdxType j;
    for (j = FirstIdx(L); j <= Length(L) - 1; j++) {
        if (L.A[j] < nilaiMin) {
            nilaiMin = L.A[j];
            idxNilaiMin = j;
        }
    }
    DeleteAt(&L, idxNilaiMin);
    InsertLast(&L, nilaiMin);
    ElType nilaiMax = L.A[FirstIdx(L)];
    IdxType idxNilaiMax = FirstIdx(L);
    IdxType i;
    for (i = FirstIdx(L); i <= Length(L) - 1; i++) {
        if (L.A[i] > nilaiMax) {
            nilaiMax = L.A[i];
            idxNilaiMax = i;
        }
    }
    DeleteAt(&L, idxNilaiMax);
    InsertLast(&L, nilaiMax);
    return L; 
}