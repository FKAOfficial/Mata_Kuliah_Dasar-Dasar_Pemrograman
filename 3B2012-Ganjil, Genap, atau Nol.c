/*
Deskripsi       : Menentukan sebuah input ganjil, genap, atau nol
Nama            : Fairuz Khalil Azmi
Tanggal / versi : 18 Oktober 2026
Compiler        : GCC
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	int bilangan;

	/* Algoritma */
    scanf("%d", &bilangan);

    if(bilangan == 0){
        printf("nol");
    }
    else if(bilangan % 2 == 0){
        printf("genap");
    }
    else {
        printf("ganjil");
    }
    
	return 0;
}