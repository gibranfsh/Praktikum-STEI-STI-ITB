/* NIM : 18221069
 * NAMA : Gibran Fasha Ghazanfar
 * TANGGAL : 12 September 2022
 * TOPIK : Loop
 * DESKRIPSI : Program yang menjumlahkan semua digit bilangan dalam integer
 * */
#include <stdio.h>
#include <string.h>

int main() {
	int a;
	int s = 0;
	
	scanf("%d", &a);
	
	while (a != 0) {
		s = s + a % 10;
		a = a / 10;
	}
	printf("%d\n", s);
	return 0;
}

