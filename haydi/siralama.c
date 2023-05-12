#include <stdio.h>
int main()
{
    int aranacak_dizi[100];
    int aranan_bilgi;
    int bulunan_indis = -1;
    for (int i; i < 100; ++i)
    {
        aranacak_dizi[i] = i * 2;
        printf("%d \t", aranacak_dizi[i]);
    }
    printf("\nAranacak sayiyi Giriniz :");
    scanf("%d", &aranan_bilgi);
    for (int i = 0; i < 100; ++i)
    {
        if (aranan_bilgi == aranacak_dizi[i])
        {
            bulunan_indis = i;
            printf("Aranan bilgi %d ..> %d. indisinde bulundu \n",
                   aranan_bilgi, bulunan_indis);
            break;
            if (bulunan_indis == -1)
                printf("aranan bilgi od bulunamad1 \n", aranan_bilgi);
            return 0;
        }
    }

    sizeof(aranacak_dizi);
}
