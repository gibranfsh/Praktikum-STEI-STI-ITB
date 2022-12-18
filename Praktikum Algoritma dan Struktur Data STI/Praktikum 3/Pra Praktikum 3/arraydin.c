#include <stdio.h>
#include "arraydin.h"
#include <stdlib.h>

/**
 * Konstruktor
 * I.S. sembarang
 * F.S. Terbentuk ArrayDin kosong dengan ukuran InitialSize
 */
ArrayDin MakeArrayDin(){
    ArrayDin arr;
    arr.A= (ElType *) malloc (InitialSize*sizeof(ElType));
    arr.Neff = 0;
    arr.Capacity = InitialSize;
    return arr;
};

/**
 * Destruktor
 * I.S. ArrayDin terdefinisi
 * F.S. array->A terdealokasi
 */
void DeallocateArrayDin(ArrayDin *array){
    free((*array).A);
};

/**
 * Fungsi untuk mengetahui apakah suatu array kosong.
 * Prekondisi: array terdefinisi
 */
boolean IsEmpty(ArrayDin array){
    return (array.Neff == 0);
};

/**
 * Fungsi untuk mendapatkan banyaknya elemen efektif array, 0 jika tabel kosong.
 * Prekondisi: array terdefinisi
 */
int Length(ArrayDin array){
    return (array.Neff);
};

/**
 * Mengembalikan elemen array L yang ke-I (indeks lojik).
 * Prekondisi: array tidak kosong, i di antara 0..Length(array).
 */
ElType Get(ArrayDin array, IdxType i){
    return (array.A[i]);
};

/**
 * Fungsi untuk mendapatkan kapasitas yang tersedia.
 * Prekondisi: array terdefinisi
 */
int GetCapacity(ArrayDin array){
    return array.Capacity;
};

/**
 * Fungsi untuk menambahkan elemen baru di index ke-i
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void InsertAt(ArrayDin *array, ElType el, IdxType i){
    int length = Length(*array);
	int capacity = GetCapacity(*array);
	
	if (length == capacity)
	{
		int desiredCapacity = capacity + InitialSize;
		ElType *arr = (ElType *) malloc(desiredCapacity * sizeof(ElType));
		for (int a = 0; a < length; a++)
		{
			arr[a] = Get(*array, a);
		}
		free(array->A); // INGET BISA JUGA LANGSUNG array->A
		
		array->A = arr; //array->A
		array->Capacity = desiredCapacity; //array->Capacity
	}
	
	for (int a = length - 1;a >= i; a--)
	{
		array->A[a+1] = array->A[a];
	}
	array->A[i] = el;
	array->Neff++;
};

/**
 * Fungsi untuk menghapus elemen di index ke-i ArrayDin
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void DeleteAt(ArrayDin *array, IdxType i){
     int index;

     for (index = i; index < Length(*array) - 1; index++)
     {
        (*array).A[index] = (*array).A[index+1];
     }

     (*array).Neff--;
};



