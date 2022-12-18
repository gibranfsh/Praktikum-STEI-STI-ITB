#include <stdio.h>

int main() {
	int a;
	float sum = 0.0;
	float jmhs = 0.0;
	int jmhslulus = 0;
	float idxkelas;
	
	scanf("%d", &a);
	if (a == -999) {
		printf("Tidak ada data\n");
		}
	else {
		do
			{if (a >= 0 && a <= 4) {
				sum += a;
				jmhs += 1;
				if (a >= 3) {
					jmhslulus += 1;
					}
				}
			scanf("%d", &a);
		} while (a != -999);
		
		if (jmhs > 0.0) {
			printf("Jumlah mahasiswa yang lulus = %d\n", jmhslulus);
			idxkelas = sum/jmhs;
			printf("Nilai rata-rata = %.2f\n", idxkelas);
		
			if (idxkelas == 4.00) {
				printf("Indeks akhir kelas = A\n");
				}
			else if (idxkelas >= 3.00 && idxkelas < 4.00) {
				printf("Indeks akhir kelas = B\n");		
				}
			else if (idxkelas >= 2.00 && idxkelas < 3.00) {
				printf("Indeks akhir kelas = C\n");	
				}
			else if (idxkelas >= 1.00 && idxkelas < 2.00) {
				printf("Indeks akhir kelas = D\n");	
				}
			else if (idxkelas >= 0.00 && idxkelas < 1.00) {
				printf("Indeks akhir kelas = E\n");	
				}
			}
		else {
			printf("Tidak ada data\n");
			}	
		}
			
	return 0;
	}
