//NIM 				: 18221069
//Nama				: Gibran Fasha Ghazanfar
//Tanggal			: 31 Oktober 2022
//Topik praktikum	: Praktikum 8-Duplicate.c
//Deskripsi			: implementasi duplicate.h

#include "duplicate.h"

/*
    Masukkan semua elemen array arr ke suatu Set, kemudian kembalikan Set tersebut
        Contoh:
            arrToSet
                <- arr = [1, 1, 3]
                <- arrSize = 3
            -> [1, 3]
*/
Set arrToSet(int* arr, int arrSize){
	Set S;
	CreateEmpty(&S);
	int i;
	for (i=0;i<arrSize;i++){
		if (!(IsMember(S,arr[i]))){
			S.Elements[S.Count] = arr[i];
			S.Count +=1;
			}
		}
	return S;
	}

/*
    Dengan memanfaatkan fungsi arrToSet, hapuslah elemen duplikat pada array arr
    kemudian kembalikan isinya secara menurun

    Penjelasan Parameter:
    Parameter 1: arr, merupakan array masukan yang perlu dihapus elemen duplikatnya
    Parameter 2: arrSize, merupakan panjang arr
    Parameter 3: arrRes, merupakan array keluaran, hasil pengapusan elemen duplikat
        dan elemen-elemennya terurut menurun
    Parameter 4: arrResSize, merupakan panjang arrRes

    Contoh: 
        removeDuplicate
            <- arr = [1, 1, 2, 3]
            <- arrSize = 4
            -> arrRes = [3, 2, 1]
            -> arrResSize = 3
        removeDuplicate
            <- arr = [3, 1, 1]
            <- arrSize = 3
            -> arrRes = [3, 1]
            -> arrResSize = 2
*/
void removeDuplicateDesc(int* arr, int arrSize, int* arrRes, int* arrResSize){
	Set S;
	int i;
	int j = 0;
	int maks;
	int arrRsize = 0;
	CreateEmpty(&S);
	S = arrToSet (arr,arrSize);
	while (!(IsEmpty(S))){
		maks = S.Elements[0];
		for (i=0;i<S.Count;i++){
				if (maks < S.Elements[i]){
					maks = S.Elements[i];
					}
			}
			arrRes[j] = maks;
			j +=1;
			arrRsize +=1;
			Delete(&S,maks);
		}
		*arrResSize = arrRsize;
	}
	

