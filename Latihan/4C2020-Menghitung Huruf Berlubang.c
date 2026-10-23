/* Program	: Huruf_Berlubang_Fairuz.c
 * Deskripsi: Lubang pada kalimat
 * Nama		: Fairuz Khalil Azmi
 * Tanggal	: 18 Oktober 2026
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	char Kalimat[51];
	int i = 0, lubang = 0;

	/* Algoritma */
	fgets(Kalimat, sizeof(Kalimat), stdin);
	
	while(Kalimat[i] != '\0' && Kalimat[i] != '\n'){
		switch(Kalimat[i]){
			case 'A' :
			case 'D' :
			case 'O' :
			case 'P' :
			case 'Q' :
			case 'R' :
				lubang = lubang + 1;
				break;
			case 'B' :
				lubang = lubang + 2;
				break;
		}
		i++;
	}
	printf("%d", lubang);
	return 0;
}