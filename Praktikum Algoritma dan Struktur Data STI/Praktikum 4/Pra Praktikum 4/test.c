/*
 * NIM: 18221069
 * Nama: Gibran Fasha Ghazanfar
 * Tanggal: 24 September 2022
 * Topik praktikum: Pra Praktikum 4
 * Deskripsi: Implementasi array.h
 */
#include <stdio.h>
#include "fibonacci.h"

// Deret bilangan fibonacci adalah deret angka yang susunan angkanya
// merupakan penjumlahan dari dua angka sebelumnya.
// Contoh:
// Fib 0: 1
// Fib 1: 1
// Fib 2: 1 + 1 = 2
// Fib 3: 2 + 1 = 3
// Fib 4: 3 + 2 = 5
// Fib 5: 5 + 3 = 8

// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci ke argumen result
// Contoh:
// n = 5
// Nilai argumen result = 8
//void fibonacci1(int n, int *result)
int main()
{	int a = 1, b = 1, c, n, i;
	scanf("%d", &n);
    if (n == 0)
        printf("%d", a);
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    printf("%d", b);
}

// Menerima argument sebuah integer n dan mengembalikan
// nilai suku ke-n dari deret fibonacci
/*int fibonacci2(int n);

// Menerima argument sebuah integer n
// Output adalah argumen result yang bertipe pointer int digunakan sebagai array
// Tuliskan semua nilai deret fibonacci dari 0 - n ke argumen result
// n = 5
// result = [1, 1, 2, 3, 5, 8]
void fibonacci3(int n, int *result);*/


/*int main()
{
	int n = 5;
	int *equal;
	int *pt;
	int hasil;
	int arr[n];
	pt = arr;
	arr[0] = 1;
	arr[1] = 1;
	
	if (n == 0 || n == 1)
	{
		hasil = *(arr+1);
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			*(pt + i) = *(pt + i - 1) + *(pt + i - 2);
			hasil = *(pt + i);
		}
	}
	equal = &hasil;
	printf("%d", *equal);
	return 0;
}*/
