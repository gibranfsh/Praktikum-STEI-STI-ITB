/* NIM : 18221069
 * NAMA : Gibran Fasha Ghazanfar
 * TANGGAL : 12 September 2022
 * TOPIK : Loop
 * DESKRIPSI : Mengecek apakah dua string yang diinput sama (tanpa memedulikan case sensitive)
 * */
#include <stdio.h>

int main() {
	char str1[100], str2[100];
	int i = 0;
	int n;
	
	scanf("%s", str1);
	scanf("%s", str2);
	
	for (n = 0; str1[n] != '\0'; n++) {
		if (str1[n] >= 'A' && str1[n] <= 'Z') {
			str1[n] = str1[n] + 32;
			}
		}
	for (n = 0; str2[n] != '\0'; n++) {
		if (str2[n] >= 'A' && str2[n] <= 'Z') {
			str2[n] = str2[n] + 32;
			}
		}
	
	while (str1[i] == str2[i]) {
		if (str1[i] == '\0' || str2[i] == '\0') {
			break; }
		i++; }
		
	if (str1[i] == '\0' && str2[i] == '\0') {
		printf("Ya\n");
		}
	else {
		printf("Tidak\n");
		}
		
		
	return 0;
 }
