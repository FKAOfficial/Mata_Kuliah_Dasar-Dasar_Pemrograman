/*
Deskripsi      : Mengonversi suhu dalam celcius ke fahrenheit
Nama           : Fairuz Khalil Azmi
tanggal/ versi : 13 Oktober 2026
Catatan        : °F = °C × 1,8 + 32
*/

#include <stdio.h>
#include <math.h>

int main(){
    /* Kamus Data */
    float c, f;
    /* Algoritma */
    scanf("%f", &c);
    f = c * 1.8 + 32;
    printf("%.2f", f);
    return 0;
}