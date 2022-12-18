/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 19 September 2022
 * Topik praktikum: Pra Praktikum 3
 * Deskripsi: Implementasi arraydin.h
 */
#include <stdio.h>
#include "arraydin.h"
#include <stdlib.h>

ArrayDin MakeArrayDin()
{	ArrayDin M;
	M.A= (ElType *) malloc (InitialSize*sizeof(ElType));
	M.Capacity = InitialSize;
	M.Neff = 0;
	return M;
}

void DeallocateArrayDin(ArrayDin *array)
{
	free((*array).A);
}

boolean IsEmpty(ArrayDin array)
{
	return (array.Neff == 0);
}

int Length(ArrayDin array)
{
    return (array.Neff);
}

ElType Get(ArrayDin array, IdxType i)
{
	return (array.A[i]);
}

int GetCapacity(ArrayDin array)
{
	return array.Capacity;
}
void InsertAt(ArrayDin *array, ElType el, IdxType i)
{	
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

}
void InsertLast(ArrayDin *array, ElType el)
{
	int insertAt = Length(*array);
	InsertAt(array, el, insertAt);
}

/**
 * Fungsi untuk menambahkan elemen baru di awal array.
 * Prekondisi: array terdefinisi
 */
void InsertFirst(ArrayDin *array, ElType el)
{
	InsertAt(array, el, 0); //indeks ke-0 {indeks awal array)
}

/**
 * Fungsi untuk menghapus elemen di index ke-i ArrayDin
 * Prekondisi: array terdefinisi, i di antara 0..Length(array).
 */
void DeleteAt(ArrayDin *array, IdxType i)
{
	int index;

     for (index = i; index < Length(*array) - 1; index++)
     {
        (*array).A[index] = (*array).A[index+1];
     }

     (*array).Neff--;
}

void DeleteLast(ArrayDin *array)
{
	int deleteAt = Length(*array)-1;
	DeleteAt(array, deleteAt);
}

/**
 * Fungsi untuk menghapus elemen pertama ArrayDin
 * Prekondisi: array tidak kosong
 */
void DeleteFirst(ArrayDin *array)
{
	DeleteAt(array, 0);
}

/**
 * Fungsi untuk melakukan print suatu ArrayDin.
 * Print dilakukan dengan format: [elemen-1, elemen-2, ..., elemen-n]
 * dan diakhiri newline.
 * Prekondisi: array terdefinisi
 */
void PrintArrayDin(ArrayDin array)
{	
	if (IsEmpty(array))
	{
		printf("[]\n");
	}
	else
	{
		printf("[");
		for (int i = 0; i < array.Neff; i++)
		{
			printf("%d", array.A[i]);
			if (i < array.Neff-1)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}
}

/**
 * Fungsi untuk melakukan reverse suatu ArrayDin.
 * Prekondisi: array terdefinisi
 */
void ReverseArrayDin(ArrayDin *array)
{
		int length = Length(*array);
		for (int i = 0; i < length/2;i++)
		{
			ElType temp = (*array).A[i];
			(*array).A[i] = (*array).A[length-i-1];
			(*array).A[length-i-1] = temp;
		}
}

/**
 * Fungsi untuk melakukan copy suatu ArrayDin.
 * Prekondisi: array terdefinisi
 */
ArrayDin CopyArrayDin(ArrayDin array)
{
	ArrayDin copy = MakeArrayDin();
	for (int i = 0;i < array.Neff; i++)
	{
		InsertLast(&copy, array.A[i]);
	}
	return copy;
}

/**
 * Fungsi untuk melakukan search suatu ArrayDin.
 * Index pertama yang ditemukan akan dikembalikan.
 * Jika tidak ditemukan, akan mengembalikan -1.
 * Prekondisi: array terdefinisi
 */
IdxType SearchArrayDin(ArrayDin array, ElType el)
{
	for (int i = 0;i < array.Neff;i++)
	{
		if (array.A[i] == el)
		{
			return i;
		}
	}
	return -1;
}
