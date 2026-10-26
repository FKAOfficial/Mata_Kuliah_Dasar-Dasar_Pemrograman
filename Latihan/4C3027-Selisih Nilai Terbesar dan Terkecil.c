// Fairuz Khalil Azmi
// 26 OKtober 2026
// Tujuan : Menghitung Selisih Nilai Maks dan Min dari 10 bilangan

#include <stdio.h>

int main () {
    int Bil[10];
    int Min, Max, Hasil;

    for(int a = 0; a < 2; a++){
        for(int i = 0; i < 10; i++){
            if(a == 0){
                scanf(" %d", &Bil[i]);
            } else {
                if(Max < Bil[i]){
                    Max = Bil[i];
                }
                if(Min > Bil[i]){
                    Min = Bil[i];
                }
            }
        }
        if(a == 0){
            Max = Min = Bil[0];
        }
    }
    Hasil = Max - Min;
    printf("%d", Hasil);
}