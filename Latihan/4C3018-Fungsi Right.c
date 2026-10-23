/* Program		: Validasi_Right_Fairuz.c
 * Deskripsi	: Menampilkan N buah karakter terkanan dari array karakter
 * Nama			: Fairuz Khalil Azmi
 * Tanggal/versi: 18 Oktober 2026
 */

#include <stdio.h>

int main() {
	/* Kamus data */
	char S[31];
	int i, N, a;
	i = 0;

	/* Algoritma */
	fgets(S, sizeof(S), stdin);
	scanf("%d", &N);
	
	while(S[i] != '\0' && S[i] != '\n'){
		i++;
	}

	a = i - N;
	if(a < 0){
		a = 0;
	}
	for(; a < i; a++){
		printf("%c", S[a]);
	}
	
	return 0;
}