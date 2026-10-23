/*
 * Deskripsi	: Menentukan nilai maksimal dari tiga variabel
 * Nama			: Fairuz Khalil Azmi
 * Tanggal/versi: 18 Oktober 2026
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilA, bilB, bilC, maks;

	/* Algoritma */
	scanf("%d", &bilA);
	scanf("%d", &bilB);
	scanf("%d", &bilC);

	maks = bilA;
	if (maks<bilB){
		maks=bilB;
	}
	if (maks<bilC){
		maks=bilC;
	}
	
	printf("%d", maks);

	return 0;
}