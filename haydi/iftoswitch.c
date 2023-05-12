#include <stdio.h>

int main()
{
    int deger;
    while (7<10)
    {
        printf("Ay değerini giriniz \n");
        
        scanf("%d", &deger);

        if (deger <= 12 && deger >= 1)
        {
            switch (deger)
            {
            case 1:
                printf("Ocak");
                break;
            case 2:
                printf("Şubat");
                break;
            case 3:
                printf("Mart");
                break;
            case 4:
                printf("Nisan");
                break;
            case 5:
                printf("Mayıs");
                break;
            case 6:
                printf("Haziran");
                break;
            case 7:
                printf("Temmuz");
                break;
            case 8:
                printf("Ağustos");
                break;
            case 9:
                printf("Eylül");
                break;
            case 10:
                printf("Ekim");
                break;
            case 11:
                printf("Kasım");
                break;
            case 12:
                printf("Aralık");
                break;

            default:
                break;
            }
        }
        else
        {
            printf("Girilen deger gecersiz");
        }
    }
    return 0;
}