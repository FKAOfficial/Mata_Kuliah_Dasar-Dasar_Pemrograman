/*
Deskripsi       : Menghitung biaya parkir
Nama            : Fairuz Khalil Azmi
tanggal / versi : 18 Oktober 2026
 */

#include <stdio.h>


int main(){
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;
    
    /* Algoritma */
    scanf("%d", &jenisKendaraan);// input jenis kendaraan
    scanf("%d", &waktu);// input lama parkir (dalam jam)
    totalBiaya = 0;

    switch(jenisKendaraan){
        case 1 : /* isi instruksi jika jenis kendaraan 1 */
			if(waktu>1){
				totalBiaya = 1000*(1 + waktu);
			}
			else if(waktu>0){
				totalBiaya = 2000;
			}
          break;
        case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
			if(waktu>1){
				totalBiaya = 500*(1 + waktu);
			}
			else if(waktu>0){
				totalBiaya = 1000;
			}
          break;
    }
    /* tampilkan total biaya*/
    printf("%d", totalBiaya);
    
    return 0;
}