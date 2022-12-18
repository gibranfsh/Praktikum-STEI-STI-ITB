#include <stdio.h>
#include <math.h>
#include "point.h"


POINT MakePOINT (float X, float Y){
/* Membentuk sebuah POINT dari komponen-komponennya */
	POINT P1;
	Absis(P1) = X;
	Ordinat(P1) = Y;
	return P1;
};

void BacaPOINT (POINT * P){
/* Membaca nilai absis dan ordinat dari keyboard dan membentuk
   POINT P berdasarkan dari nilai absis dan ordinat tersebut */
/* Komponen X dan Y dibaca dalam 1 baris, dipisahkan 1 buah spasi */
/* Contoh: 1 2
   akan membentuk POINT <1,2> */
/* I.S. Sembarang */
/* F.S. P terdefinisi */
	float X, Y;
	scanf("%f %f", &X, &Y);
	*P = MakePOINT(X,Y);
};
void TulisPOINT (POINT P){
/* Nilai P ditulis ke layar dengan format "(X,Y)"
   tanpa spasi, enter, atau karakter lain di depan, belakang,
   atau di antaranya */
/* I.S. P terdefinisi */
/* F.S. P tertulis di layar dengan format "(X,Y)" */
	printf("(%.2f,%.2f)", Absis(P), Ordinat(P));
};

boolean EQ (POINT P1, POINT P2){
/* Mengirimkan true jika P1 = P2 : absis dan ordinatnya sama */
	return ((Absis(P1) == Absis(P2)) && (Ordinat(P1) == Ordinat(P2)));
};
boolean NEQ (POINT P1, POINT P2){
/* Mengirimkan true jika P1 tidak sama dengan P2 */
	return ((Absis(P1) != Absis(P2)) || (Ordinat(P1) != Ordinat(P2)));
};
/* *** Kelompok menentukan di mana P berada *** */
boolean IsOrigin (POINT P){
/* Menghasilkan true jika P adalah titik origin */
	return (Absis(P) == 0 && Ordinat(P) == 0);
};
boolean IsOnSbX (POINT P){
/* Menghasilkan true jika P terletak Pada sumbu X */
	return (Absis(P) == 0);
};
boolean IsOnSbY (POINT P){
/* Menghasilkan true jika P terletak pada sumbu Y */
	return (Ordinat(P) == 0);
};
int Kuadran (POINT P){
/* Menghasilkan kuadran dari P: 1, 2, 3, atau 4 */
/* Prekondisi : P bukan titik origin, */
/*              dan P tidak terletak di salah satu sumbu */

/* *** KELOMPOK OPERASI LAIN TERHADAP TYPE *** */
	if (Absis(P) > 0 && Ordinat(P) > 0){
		return 1;
	}
	else if (Absis(P) < 0 && Ordinat(P) > 0){
		return 2;
	}
	else if (Absis(P) < 0 && Ordinat(P) < 0){
		return 3;
	}
	else if (Absis(P) > 0 && Ordinat(P) < 0){
		return 4;
	}
};
POINT PlusDelta (POINT P, float deltaX, float deltaY){
/* Mengirim salinan P yang absisnya adalah Absis(P) + deltaX dan ordinatnya adalah Ordinat(P) + deltaY */
	POINT PSalin;
	Absis(PSalin) = Absis(P) + deltaX;
	Ordinat(PSalin) = Ordinat(P) + deltaY;
	return (MakePOINT (Absis(PSalin), Ordinat(PSalin)));
};
void Geser (POINT *P, float deltaX, float deltaY){
/* I.S. P terdefinisi */
/* F.S. P digeser, absisnya sebesar deltaX dan ordinatnya sebesar deltaY */
	Absis(*P) += deltaX;
	Ordinat(*P) += deltaY;
};
float Jarak0 (POINT P){
/* Menghitung jarak P ke (0,0) */
 return ( sqrt((Absis(P)*Absis(P)) + (Ordinat(P)* Ordinat(P))));
};
float Panjang (POINT P1, POINT P2){
/* Menghitung panjang garis yang dibentuk P1 dan P2. */
 return ( sqrt( ((Absis(P1) - Absis(P2)) * (Absis(P1) - Absis(P2))) + ( (Ordinat(P1) - Ordinat(P2)) * (Ordinat(P1) - Ordinat(P2)) ) ));
};

int main(){
	POINT arr;
	arr = MakePOINT(-3,1);
	printf("%d", Kuadran(arr));
	return 0;
}


