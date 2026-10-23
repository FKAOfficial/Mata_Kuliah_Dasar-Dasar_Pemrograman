// Fairuz Khalil Azmi
// 23 Oktober 2026
// Tujuan : Menentukan kesamaan ingredient terhadap 2 kue

#include <stdio.h>
#include <string.h>                                     //Untuk fungsi strcpy()
#include <stdbool.h>                                    //Untuk boolean
#include <stdlib.h>                                     //Untuk fungsi abs()

typedef struct {                                        //Mau nyoba
    char terdefinisi[14];
    char K[17];                                         //Menghindari anomali
    char L[17];
} A;

typedef struct {
    char K[17];
    char L[17];
} B;

int main(){
    float N, realita;                                   //Batas minimal dua buah kue dinyatakan sama
    int index1, index2;
    int panjang_karakter[2];
    int max, count = 0;
    bool status;
    char *ikan[2], *udang[2];
    A bahan;
    B temp;
    strcpy(bahan.terdefinisi, "tgrpmacskfjno");
    
    scanf("%f", &N);
    while (getchar() != '\n');
    fgets(temp.K, sizeof(temp.K), stdin);
    fgets(temp.L, sizeof(temp.L), stdin);

    ikan[0] = temp.K;       //otomatis ikan[0] = &temp.K[0];
    ikan[1] = temp.L;       //otomatis ikan[1] = &temp.L[0];
    udang[0] = bahan.K;     // ~
    udang[1] = bahan.L;     // ~

    for(int a = 0; a < 2; a++){
        index1 = 0;
        index2 = 0;

        while(index1 < 17 && ikan[a][index1] != '\n'){
            switch(ikan[a][index1]){
                case ' ' :
                    break;
                default :
                    udang[a][index2] = ikan[a][index1];
                    index2++;
                    break;   
            }
            index1++;
        }
        panjang_karakter[a] = index2;                   //Panjang Karakter terhitung sampai sebelum '\0'
        udang[a][index2] = '\0';
    }                                                   //Tahap 1 memastikan bahan hanya ada karakter dan '\0' berhasil
    
    for(int baris = 0; baris < panjang_karakter[0]; baris++){
        status = false;
        for(int kolom = 0; kolom < panjang_karakter[1] && !status; kolom++){
            if(bahan.K[baris] == bahan.L[kolom]){
                status = true;
            }
        }
        if(!status){
            count++;
        }
    }
    max = panjang_karakter[0];
    if(max < panjang_karakter[1]){
        max = panjang_karakter[1];
    }

    realita = ((float)(max - abs(panjang_karakter[0] - panjang_karakter[1]) - count)/max)*100;
    if(realita < N && realita >= 0){
        printf("tidak sama");
        return 0;
    }
    else if (realita >= N && realita <= 100){
        printf("sama");
        return 0;
    }
    else {
        printf("lah");
        return 1;                                       //Mau nyoba
    }
}