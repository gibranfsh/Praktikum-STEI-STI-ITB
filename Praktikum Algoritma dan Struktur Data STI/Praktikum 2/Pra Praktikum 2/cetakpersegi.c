/* NIM : 18221069
 * NAMA : Gibran Fasha Ghazanfar
 * TANGGAL : 12 September 2022
 * TOPIK : Loop
 * DESKRIPSI : Membentuk pola  O atau X dengan rumus j = 2*n-1
 * */
#include <stdio.h>

int main() {
	int i, j, n;
	scanf("%d", &n);
	for(i=1;i<=(2*n-1);i++) {
		if (i % 2 == 1) {
			for(j=1;j<=(2*n-1);j++){
				if (j % 2 == 0) {
					printf("X");
				} else {
					printf("O");
				}	
			}
		} else {
			for(j=1;j<=(2*n-1);j++){
				if (j % 2 == 1) {
					printf("X");
				} else {
					printf("O");
				}
			}
		}
	printf("\n");
	}
	return 0;
}
