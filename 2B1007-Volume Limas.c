/*
Deskripsi	 : Menghitung volume limas
Nama		 : Fairuz Khalil Azmi
Tanggal/versi: 13 Oktober 2026
Compiler 	 : GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	float volume;
	float panjang, lebar, tinggi;
    
	/* Algoritma */
    scanf("%f", &panjang);
    scanf("%f", &lebar);
    scanf("%f", &tinggi);
    volume = (panjang * lebar * tinggi) / 3;
	printf("%.6f", volume);
	return 0;
}