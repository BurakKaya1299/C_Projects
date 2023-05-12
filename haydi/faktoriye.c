#include <stdio.h>
#include <limits.h>

int sonuc_ulong_max_asar_mi(unsigned short int sayi);



unsigned long long int faktoriyel_hesaplama(unsigned short int sayi);

int main() {
    printf("%d", USHRT_MAX);

    for (int i = 0; i < USHRT_MAX; ++i) {
        if(sonuc_ulong_max_asar_mi(i))
        {
            break;
        } else
        {
            printf("%hu! = %llu\n",i, faktoriyel_hesaplama(i));
        }
    }
    return 0;
}
unsigned long long int faktoriyel_hesaplama(unsigned short int sayi) {
    if(sayi==0 || sayi==1)
        return 1;
    return (sayi * faktoriyel_hesaplama(sayi-1));
}

int sonuc_ulong_max_asar_mi(unsigned short int sayi) {
    unsigned long long int sonuc = 1;
    for (unsigned short int i = 1; i < sayi; ++i) {
        if(ULLONG_MAX / i < sonuc) {
            return 1; // sonuc ULLONG_MAX ı asarsa
        } else
        {
            sonuc*=i; // sonuc ULLONG_MAX ı asmazsa
        }
    }
    return 0;
}