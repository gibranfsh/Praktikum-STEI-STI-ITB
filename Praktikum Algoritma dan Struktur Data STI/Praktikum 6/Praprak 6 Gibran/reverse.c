/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 15 Oktober 2022
 * Topik praktikum: Pra Praktikum 6
 * Deskripsi: Implementasi reverse.h
 */

#include <stdio.h>
#include "reverse.h"

void transferReverse(Queue* q1, Queue* q2)
// Proses: Memindahkan tiap elemen q1 ke q2 dengan urutan yang terbalik
// I.S.: q1 tidak kosong, q2 kosong. q1 dan q2 memiliki panjang yang sama
// F.S.: q1 kosong, q2 berisi elemen-elemen yang tadinya milik q1 dengan urutan yang terbalik
{
    //Proses bentuk q1
    for (int x = (*q1).TAIL; x >= (*q1).HEAD;x --){
        Push(q2, (*q1).Tab[x]);
    }
    //proses hapus q2
    for (int x = 0 ; x  < Length(*q1);x ++){
        Pop(q1);
    }
}
