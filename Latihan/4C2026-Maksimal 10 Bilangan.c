// Fairuz Khalil Azmi
// 26 Oktober 2026
// Tujuan : Mencari Bilangan terbesar

#include <stdio.h>

int main () {
    int Bil[10];
    int Max;

    for(int a = 0; a < 2; a++) {
        for(int i = 0; i < 10; i++) {
            if(a == 0){
                scanf(" %d", &Bil[i]);
            } else {
                if(Max < Bil[i]){
                    Max = Bil[i];
                }
            }
        }
        if(a == 0){
            Max = Bil[0];
        }
    }
    printf("%d", Max);
}