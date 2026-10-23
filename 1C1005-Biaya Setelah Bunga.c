/*
Deskripsi      : Menentukan Biaya yang harus dibayar
Nama           : Fairuz Khalil Azmi
tanggal/ versi : 13 Oktober 2026
*/

#include<stdio.h>


int main(){
    /* Kamus Data */
    float biayaAwal, bunga, totalBiaya;
    /* Algoritma */
    scanf("%f", &biayaAwal);
    scanf("%f", &bunga);
    bunga = bunga / 100;
    totalBiaya = biayaAwal * (1 + bunga);
    printf("%.2f", totalBiaya);
    return 0;
}