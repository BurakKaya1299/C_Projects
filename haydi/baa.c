#include <stdio.h>


int topla(int , int );
int cikar(int , int );
int bol(int , int );
int carp(int , int );

int main() {
    
   int(*fonksiyonlar[4])(int, int) = {topla, cikar, carp, bol};
   for (int i = 0; i < 4; ++i){
       printf("%p\n", (*fonksiyonlar[i]));
   }
   char *islem_adlari[] = {"Toplama" , "Cıkarma", "Carpma", "Bolme"};
    for (int i = 0; i < 4; ++i){
        printf("%s isleminin sonucu : %d\n",islem_adlari[i], (*fonksiyonlar[i])(6, 2));
    }

    return 0;
}

int topla(int a, int b){
    return a + b;
}
int cikar(int a, int b){
    return a - b;
}
int bol(int a, int b){
    if(b !=0) {
        return a / b;
    }else{
        printf("Bolen sifir olamaz");
        return 0;
    }
}
int carp(int a, int b){
    return a * b;
}