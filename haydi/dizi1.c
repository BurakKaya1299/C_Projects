#include <stdio.h>

int main()
{
    int a;
    int fizi[10];
    for (int i = 0; i < 10; i++)
    {

        printf("Bir sayı giriniz.\n");
        scanf("%d", &fizi[i]);
        
        if (fizi[i] == 0)
        {
            break;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        printf("%d. terim: %d\n", j, fizi[j]);
    }

    return 0;
}