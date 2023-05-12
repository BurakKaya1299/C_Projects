#include <stdio.h>

int bolunebiliyormu(int a, int b)
{
    if (a % b == 0)
        return 1;

    else
        return 0;
}

int main()
{
    int bolunen, bolen;
    printf("Bölünecek olan sayıyı giriniz");
    scanf("%d", &bolunen);
    while (7 < 10)
    {
        printf("Bölen sayıyı girin");
        scanf("%d", &bolen);
        if (bolen == 0)
            printf("Lütfen 0 harici bir sayı giriniz\n");
        else
            break;
    }
    bolunebiliyormu(bolunen, bolen);
    return 0;
}
