/* Program		: Membuat_Teks_Alay_Fairuz.c
 * Deskripsi	: Membuat kalimat jadi bentuk "alay"
 * Nama			: Fairuz Khalil Azmi
 * Tanggal/versi: 18 Oktober 2026
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	char kalimat[51];
	int i;

	/* Algoritma */
	fgets(kalimat, sizeof(kalimat), stdin);
	i=0;
	while(kalimat[i] != '\n' && kalimat[i] != '\0'){
		switch(kalimat[i]){
			case 'A':
			case 'a':
				kalimat[i] = '4';
				break;
			case 'I':
			case 'i':
				kalimat[i] = '1';
				break;
			case 'Z':
			case 'z':
				kalimat[i] = '2';
				break;
			case 'E':
			case 'e':
				kalimat[i] = '3';
				break;
			case 'G':
			case 'g':
				kalimat[i] = '6';
				break;
			case 'J':
			case 'j':
				kalimat[i] = '7';
				break;
			case 'B':
			case 'b':
				kalimat[i] = '8';
				break;
		}
		i++;
	}
	printf("%s", kalimat);
	return 0;
}