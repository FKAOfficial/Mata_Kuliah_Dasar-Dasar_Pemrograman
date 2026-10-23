/*
Deskripsi      : Menghitung Luas Lingkaran dari Jari-Jarinya
Nama           : Fairuz Khalil Azmi
tanggal/versi  : 13 Oktober 2026
*/

#include <stdio.h>
#include <math.h>

int main(){
    /* Kamus Data */
    float luas; // variable luas lingkaran
    float r;    // variable jari-jari lingkaran
    float phi = 3.14; // variable phi
    
    /* Algoritma */
    scanf("%f", &r);
    luas = phi * r * r;
    printf("%.2f", luas);
    return 0;
}