/* Program		: Validasi_Vokal_Fairuz.c
 * Deskripsi	: Memeriksa apakah suatu karakter merupakan huruf vokal atau bukan
 * Nama			: Fairuz Khalil Azmi
 * Tanggal/versi: 18 Oktober 2026
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	/* Kamus data */
	char X[] = "JTKPolban", input;
	bool status;
	int i;
	i = 0;

	/* Algoritma */
	scanf(" %c", &input);
	status = false;

	while(status == false && X[i] != '\0'){
		if(toupper(input) == toupper(X[i])){
			status = true;
		}
		i++;
	}

	if(status == true){
		printf("ada");
	}
	else {
		printf("tidak ada");
	}
	return 0;
}