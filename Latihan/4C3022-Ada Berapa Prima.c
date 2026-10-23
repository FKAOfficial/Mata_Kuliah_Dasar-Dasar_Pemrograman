/* Program	: Ada_Berapa_Prima_Fairuz.c
 * Deskripsi: Menghitung angka yang prima
 * Nama		: Fairuz Khalil Azmi
 * Tanggal	: 21 Oktober 2026
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	/* Kamus data */
	int Bil[10], Test, i, jumlah = 0;
	bool Status; // true == komposit; false == prima

	/* Algoritma */
	scanf("%d %d %d %d %d %d %d %d %d %d", &Bil[0], &Bil[1], &Bil[2], &Bil[3], &Bil[4], &Bil[5], &Bil[6], &Bil[7], &Bil[8], &Bil[9]);
	for(int a = 0; a <= 9 ; a++){
		Status = false;
		i = 2;
		if(Bil[a]>1){
			Test = sqrt(Bil[a]); // karena Test adalah var int, sqrt(Bil) otomatis dijadikan floor
			while(i <= Test && Status == false){
				if(Bil[a]%i == 0){
					Status = true;
				}
				i++;
			}
		}
		else {
			Status = true;
		}
		
		if(Status == false){
			jumlah++;
		}
	}
	printf("%d", jumlah);
	return 0;
}