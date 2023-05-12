#include <stdio.h>

int main()
{
    int a;
printf("Lütfen bir sayı değeri giriniz \n");
scanf("%f", &a);
if(a>10 && a<50)
{
    printf("Sayınız belirli araklıktadır\n");
}
else if ( a <10)
{
    printf("Sayınız 10 dan küçük\n");
}

else if (a>50)
{
    printf("Sayınız 50 dan büyük\n");
}






}