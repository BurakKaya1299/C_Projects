#include <stdio.h>

void tahta_ciz(int satir , int sutun)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("[x]");
            }
            else
            {
                printf("[]");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    tahta_ciz(8,8);
}