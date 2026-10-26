// Fairuz Khalil Azmi
// 27 Oktober 2026
// Tujuan : Mencari Median

#include <stdio.h>
#include <stdbool.h>

int main () {
    int N;
    int Bil[20];
    float Me;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf(" %d", &Bil[i]);
    }

    if(N % 2 == 0){
        Me = (float)(Bil[(N / 2) - 1] + Bil[(N / 2)]) / 2;
    } else {
        Me = Bil[N / 2];
    }
    printf("%.1f", Me);
}