#include <stdio.h>
#include <stdarg.h>

void cift_sayi(int arg_sayac, ...)
{
    int tutucu, ciftsayi;
    va_list ap;
    va_start(ap, arg_sayac);
    tutucu = va_arg(ap, int);
    for (int i = 1; i <= arg_sayac; i++)
    {
        if ((tutucu = va_arg(ap, int)) % 2 == 0)
        {
            ciftsayi == tutucu;
            printf("%d", cift_sayi);
        }
    }

    int main()
    {
        printf("sayilar: 14,18,51,6,27,3\n");
        int sayac[6] = {14, 18, 51, 6, 27, 3};
        cift_sayi(6, 14, 18, 51, 6, 27, 3);
        return 0;
    }