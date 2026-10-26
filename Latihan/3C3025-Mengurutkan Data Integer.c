// Fairuz Khalil Azmi
// 26 Oktober 2026
// Tujuan : Mengurutkan Data Integer dari terbesar ke terkecil

#include <stdio.h>
#include <stdbool.h>

int main () {
    int Input[3];
    bool Berurutan = false;

    scanf("%d %d %d", &Input[0], &Input[1], &Input[2]);
    while(!Berurutan){
        int index = 0;
        Berurutan = true;
        for(; index <= 1; index++){                                 // Sampai index 1 saja karena saat berada di index 1, Input[1] dibandingkan dengan Input[2]
            if(Input[index] < Input[index + 1]){
                Input[index] = Input[index] + Input[index + 1];
                Input[index + 1] = Input[index] - Input[index + 1];
                Input[index] = Input[index] - Input[index + 1];
                Berurutan = false;
            }
        }
    }
    printf("%d %d %d", Input[0], Input[1], Input[2]);
}