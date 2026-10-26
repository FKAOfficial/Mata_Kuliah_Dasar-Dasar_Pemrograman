// Fairuz Khalil Azmi
// 27 Oktober 2026
// Tujuan : 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main () {
    char X[10] = "JTKPolban";
    char Huruf1, Huruf2;
    int posisi1, posisi2;
    bool a = false, b = false;

    scanf("%c %c", &Huruf1, &Huruf2);

    for(int i = 0; i < 9 && !(a && b); i++){
        if(toupper(X[i]) == toupper(Huruf1)){
            a = true;
            posisi1 = i;
        }
        if(toupper(X[i]) == toupper(Huruf2)){
            b = true;
            posisi2 = i;
        }
    }
    if(a && b && posisi1 == posisi2 + 1){
        printf("ada");
    } else {
        printf("tidak ada");
    }
}