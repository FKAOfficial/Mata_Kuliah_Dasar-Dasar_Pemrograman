/* Program	: Prima_Fairuz.c
 * Deskripsi: Menentukan Prima atau Bukan
 * Nama		: Fairuz Khalil Azmi
 * Tanggal	: 18 Oktober 2026
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	/* Kamus data */
	int Bil, Test, i = 2;
	bool Status = false; // true == komposit; false == prima

	/* Algoritma */
	scanf("%d", &Bil);
	if(Bil>1){
		Test = sqrt(Bil); // karena Test adalah var int, sqrt(Bil) otomatis dijadikan floor
		while(i <= Test && Status == false){
			if(Bil%i == 0){
				Status = true;
			}
			i++;
		}
	}
	else {
		Status = true;
	}
	
	if(Status == false){
		printf("prima");
	}
	else {
		printf("bukan prima");
	}
	
	return 0;
}