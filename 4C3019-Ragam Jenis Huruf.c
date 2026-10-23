/* Program	: Validasi_RagamHuruf_Fairuz.c
 * Deskripsi: Menghitung ragam jenis huruf pada array
 * Nama		: Fairuz Khalil Azmi
 * Tanggal	: 18 Oktober 2026
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
	/* Kamus data */
	char Kata[27], check[27];
	int i1, i2, ragam;
	bool status;

	check[0] = '\0';
	i1 = 0;
	i2 = 0;
	ragam = 0;

	/* Algoritma */
	fgets(Kata, sizeof(Kata), stdin);
	
	while(Kata[i1] != '\0' && Kata[i1] != '\n'){
		status = false; // untuk ngecek huruf sama ada atau tidak
		while(check[i2] != '\0' && status == false){
			if(toupper(Kata[i1]) == check[i2]){
				status = true; // wah ternyata ada
			}
			i2++;
		}
		if(status == false){
			check[ragam] = toupper(Kata[i1]);
			ragam++;
			check[ragam] = '\0';
		}
		i2 = 0;
		i1++;
	}
	printf("%d", ragam);
	return 0;
}