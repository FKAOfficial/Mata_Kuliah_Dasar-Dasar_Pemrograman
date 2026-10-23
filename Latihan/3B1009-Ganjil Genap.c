/*
Deskripsi	 : Melihat apakah angka adalah ganjil atau genap
Nama		 : Fairuz Khalil Azmi
Tanggal/versi: 18 Oktober 2026
Compiler	 : GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int angka;

	/* Algoritma */
	scanf("%d", &angka);

	if (angka % 2 != 0) {
		printf("ganjil\n");
	} else {
		printf("genap\n");
	}

	return 0;
}