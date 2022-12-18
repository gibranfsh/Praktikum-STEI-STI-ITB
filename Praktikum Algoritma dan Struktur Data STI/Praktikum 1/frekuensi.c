/* NIM : 18221069
 * NAMA : Gibran Fasha Ghazanfar
 * TANGGAL : 12 September 2022
 * TOPIK : Array
 * DESKRIPSI : Menghitung average dari elemen-elemen array yang dimasukan user
 * */
#include <stdio.h>
#include <string.h> /*library*/

int main()
{
    char m[10];
    int zero, wan, tu, tri, four, five, six, seven, eight, nine;
    zero = 0;
    wan = 0;
    tu = 0;
    tri = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    eight = 0;
    nine = 0;
    
	scanf("%s", m);
	
	int i;
	for (i = 0; i <= strlen(m); i++) {
		if (m[i] == '0') {
			zero++; }
		else if (m[i] == '1') {
			wan++; }
		else if (m[i] == '2') {
			tu++; }
		else if (m[i] == '3') {
			tri++; }
		else if (m[i] == '4') {
			four++; }
		else if (m[i] == '5') {
			five++; }
		else if (m[i] == '6') {
			six++; }
		else if (m[i] == '7') {
			seven++; }
		else if (m[i] == '8') {
			eight++; }
		else if (m[i] == '9') {
			nine++; }
	}
		
	printf("%d%d%d%d%d%d%d%d%d%d\n", zero, wan, tu, tri, four, five, six, seven, eight, nine);

    return 0;
}
