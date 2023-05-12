#include <stdio.h>

int main()
{
    int i;
    int dizi[5];
    printf("Bir sayı giriniz");
    scanf("%i", &i);

    for (int j = 0; j < 5; j++)
    {
        dizi[j] = i*5;
        i++;
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("%d. deger: %d\n",i,dizi[i]);
    }
    
    return 0;
}