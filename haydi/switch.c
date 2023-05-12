#include <stdio.h>

int main()
{
    int plaka;
    printf("Plaka kodunu giriniz\n");
    scanf("%d",&plaka);
    if(plaka==6)
    {
        printf("Anakara\n");
    }
    else if(plaka==34)
    {
        printf("İstanbul\n");
    }
    else if(plaka==35)
    {
        printf("İzmir\n");
    }
    else if(plaka==45)
    {
        printf("Manisa\n");
    }
    else

    {
        printf("Tanımsız plaka kodu\n");
    }
    return 0;
}