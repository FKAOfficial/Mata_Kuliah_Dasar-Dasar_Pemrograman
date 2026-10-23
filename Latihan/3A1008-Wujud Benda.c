/*
Deskripsi	  : Menentukan wujud benda berdasarkan suhunya
Nama		  : Fairuz Khalil Azmi
Tanggal/versi : 13 Oktober 2026
Compiler	  : GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float suhu;

	/* Algoritma */
	scanf("%f", &suhu);
	if (suhu >= 0 && suhu <= 100) {
		printf("berwujud cair\n");
	} else {
		printf("berwujud non cair\n");
	}
	return 0;
}