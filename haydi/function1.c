#include <stdio.h>
#include <stdlib.h>

void diziyazdir(int g_dizi[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d. indis = %d\n", i, g_dizi[i]);
    }
}

float aritmetik(int g_dizi[], int n)
{
    float toplam;
    for (int i = 0; i < n; i++)
    {
        toplam += g_dizi[i];
    }

    return toplam / n;
}

int main()
{
    int dizi[5] = {1, 2, 3, 4, 5};
    diziyazdir(dizi, sizeof(dizi)/sizeof(int));
    printf("ortalama= %d", aritmetik(dizi,sizeof(dizi)/sizeof(int)));
    return 0;
}