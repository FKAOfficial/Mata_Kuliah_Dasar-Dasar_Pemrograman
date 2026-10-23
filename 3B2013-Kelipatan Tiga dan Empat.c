/*
 * Deskripsi	: Mengetahui sebuah bilangan kelipatan 4 dan 3 atau tidak
 * Nama			: Fairuz Khalil Azmi
 * Tanggal/versi: 18 Oktober 2026
 * Compiler		: GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;
	int cek; // berisi 1 jika bilangan merupakan kelipatan 3 dan 4
	         // berisi 0 jika sebaliknya

	/* Algoritma */
	cek = 0;
	scanf("%d", &bilangan);

	if (bilangan % 3 == 0 && bilangan % 4 == 0) {
		cek = 1;
	}

	printf("%d\n", cek);

	return 0;
}