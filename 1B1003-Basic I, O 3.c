/* 
Deskripsi     : Menampilkan angka yang ada di interval X sampai Y dengan pemisah enter
Nama /Author  : Fairuz Khalil Azmi
Tanggal/versi : 13 Oktober 2026
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int X, Y;
    scanf("%d %d", &X, &Y);
    while(X<=Y){
        printf("%d", X);
        X = X + 1;
        if(X<=Y){
            printf("\n");
        }
    }
    return 0;
}