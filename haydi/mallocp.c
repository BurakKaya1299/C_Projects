#include <stdio.h>
#include <stdlib.h>
void matrisAl(int **matris, int satirSayisi, int sutunSayisi);
void matrisYazdir(int **matris, int satirS, int sutunS);

int main()
{
    // int matris[2][3];
    int satir, sutun, sayi = 0;
    printf("satir sayisini giriniz : ");
    scanf("%d", &satir);
    printf("sütün sayisini giriniz : ");
    scanf("%d", &sutun);

    int **matris = (int **)malloc(satir * sizeof(int *)); // adresleri tutacağım bellek alanını oluştur.
    for (int i = 0; i < satir; ++i)
    {
        matris[i] = (int *)malloc(sutun * sizeof(int));
    }
    if (matris == NULL)
    {
        printf("%s:%d>Dizi için gerekli bellek ayrılamamıştır.\n", __FILE__, __LINE__);
        exit(0);
    }
    else
    {
        for (int i = 0; i < sutun; ++i)
        {
            printf("Her bir satir bellek adresi : %p\n", matris[i]);
        }

        matrisAl(matris,satir,sutun); // matris[i][j] *(*(matris+i)+j) ile aynıdır.
    }

    matrisYazdir(matris,satir,sutun);

    free(matris);
    return 0;
}
void matrisAl(int **matris, int satirSayisi, int sutunSayisi)
{
    int sayi=0;
    for (int i = 0; i < satirSayisi; ++i)
    {
        for (int j = 0; j < sutunSayisi; ++j)
        {
            matris[i][j] = ++sayi; // YADA *(*(matris+i)+j) = ++sayi
        }
    }
}

void matrisYazdir(int **matris, int satirS, int sutunS)
{

    for (int i = 0; i < satirS; ++i)
    {
        for (int j = 0; j < sutunS; ++j)
        {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }
}