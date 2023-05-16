#include <stdio.h>
#include <string.h>

typedef enum cinsiyet
{
    kadin,
    erkek
} cinsi;

typedef struct OGRENCI
{
    char adi[50];
    int ogr_no;
    float notu;
    cinsi cinsiyeti;
} ogrenci;

int main()
{
    ogrenci mek_ogr[3] = {
        {"Ahmet", 1234, 85.50, erkek},
        {"Burak", 1919, 99.99, erkek},
        {"Simay", 6226, 32.57, kadin}};

    for (int i = 0; i < 3; i++)
    {
        printf("Adi : %s\n", mek_ogr[i].adi);
        printf("Numarasi : %d\n", mek_ogr[i].ogr_no);
        printf("Notu : %.2f\n", mek_ogr[i].notu);
        printf("Cinsiyeti : ");
        switch (mek_ogr[i].cinsiyeti)
        {
        case kadin:
            printf("Kadin");
            break;
        case erkek:
            printf("Erkek");
            break;
        }
        printf("\n");
    }

    return 0;
}
