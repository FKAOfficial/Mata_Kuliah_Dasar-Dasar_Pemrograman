// Fairuz Khalil Azmi
// 23 Oktober 2026
// Tujuan: Menghitung Selisih prima terkecil dan terbesar dalam interval X hingga Y

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
                                                    //KETERANGAN:
int main(){
    int X, Y;                                       //Input berupa integer di layar dengan bentuk "X Y" (2 <= X < Y < 32750), dijamin ada setidaknya 1 prima di interval X hingga Y
    int MIN_MAX[2];                                 //Berisi nilai prima terkecil [0] dan prima terbesar [1]
    int check, a;                                   //Check untuk melihat akar dari sebuah bilangan, a untuk mengecek 
    int hasil = 0;                                  //Hasil
    bool prima = false, sudah_ada_prima = false;    //Check

    MIN_MAX[0] = 0;
    MIN_MAX[1] = 0;
    scanf("%d %d", &X, &Y);                         //Input

    if(2 <= X && X < Y){
        for(int i = X; i <= Y; i++){
            a = 2;
            check = sqrt(i);                        //Karena check adalah var int, otomatis floor
            prima = true;                           //Pernyataan sementara

            while(a <= check && prima == true){     //While ini akan membatalkan pernyataan prima = true kalau nilai dalam check adalah prima
                if (i % a == 0){
                    prima = false;
                }
                a++;
            }

            if(prima == true){                      //Jika prima == true maka input nilainya ke var arr int MIN_MAX
                if(sudah_ada_prima == false){
                    MIN_MAX[0] = i;
                    sudah_ada_prima = true;
                }
                else {
                    MIN_MAX[1] = i;
                }
            }
        }
        if(MIN_MAX[1] != 0){
            hasil = MIN_MAX[1] - MIN_MAX[0];        //Hasil selisih
        }
        printf("%d", hasil);                        //Output
    }
}