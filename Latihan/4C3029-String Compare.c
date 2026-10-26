// Fairuz Khalil Azmi
// 27 Oktober 2026
// Tujuan : Menghitung Selisih Nilai ASCII pada huruf yang pertama kali berbeda dari depan dan huruf ke berapa

#include <stdio.h>
#include <stdbool.h>

int main () {
    char Kata1[11], Kata2[11];
    bool status = false;
    int Hasil1, Hasil2 = 0;

    fgets(Kata1, sizeof(Kata1), stdin);
    fgets(Kata2, sizeof(Kata2), stdin);

    for(int i = 0; (Kata1[i] != '\0' || Kata2[i] != '\0') && !status; i++){
        if(Kata1[i] != Kata2[i]){
            if(Kata1[i] == '\n'){
                Kata1[i] = '\0';
            }
            if(Kata2[i] == '\n'){
                Kata2[i] = '\0';
            }
            status = true;
            Hasil1 = Kata1[i] - Kata2[i];
            Hasil2 = i + 1;
        }
    }
    if(Hasil1 > 0){
        printf("+%d\n%d", Hasil1, Hasil2);
    } else {
        printf("%d\n%d", Hasil1, Hasil2);
    }
}