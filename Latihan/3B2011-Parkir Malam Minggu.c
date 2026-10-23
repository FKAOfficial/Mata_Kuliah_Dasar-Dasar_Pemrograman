/*
Deskripsi       : Menghitung biaya parkir khusus di malam Minggu
Nama            : Fairuz Khalil Azmi
Tanggal / versi : 18 Oktober 2026
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

    if(!(waktu>8)){
        switch(jenisKendaraan){
            case 1 : /* isi instruksi jika jenis kendaraan 1 */
            if(waktu>5){
                    totalBiaya = 500*(4*waktu-5);
                }
                else if(waktu>0){
                    totalBiaya = 1500*waktu;
                }
            break;
            case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
                if(waktu>5){
                    totalBiaya = 500*(3*waktu-5);
                }
                else if(waktu>0){
                    totalBiaya = 1000*waktu;
                }
            break;
        }
    }
    else {
        totalBiaya = -1;
    }
    /* tampilkan total biaya*/
    if(totalBiaya == -1){
        printf("disegel");
    }
    else {
        printf("%d", totalBiaya);
    }
    return 0;
}