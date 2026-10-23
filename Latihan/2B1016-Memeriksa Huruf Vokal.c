/*
Deskripsi	 : Memeriksa apakah suatu karakter merupakan huruf vokal atau bukan
Nama		 : Fairuz Khalil Azmi
Tanggal/versi: 18 Oktober 2026
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	char karakter;

	/* Algoritma */
	scanf(" %c", &karakter);

	switch(karakter){
		case 'a' :
		case 'A' :
		case 'i' :
		case 'I' :
		case 'u' :
		case 'U' :
		case 'e' :
		case 'E' :
		case 'o' :
		case 'O' :
			printf("true");
			break;
		default:
			printf("false");
			break;
	}
	return 0;
}