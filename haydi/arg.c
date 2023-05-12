#include <stdio.h>
#include <stdarg.h>

int kucuk_sayi(int arg_sayac, ...)
{
    int en_kucuk, cekilen_sayi;
    va_list ap;
    va_start(ap,arg_sayac);
    en_kucuk = va_arg(ap,int);
    for (int i = 2; i <= arg_sayac; i++)
    {
        if((cekilen_sayi=va_arg(ap,int))<en_kucuk)
        en_kucuk=cekilen_sayi;
    }
    return en_kucuk;
}

int main()
{
    printf("sayilar: 14,18,51,6,27,3\n");
    int sayac[6] = {14, 18, 51, 6, 27, 3};
    printf("En kucuk sayi: %d",kucuk_sayi(6,14, 18, 51, 6, 27, 3));
    return 0;
}