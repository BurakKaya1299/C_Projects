#include <stdio.h>
#include <stdlib.h>

int main () {

    int satir, sutun;
    printf("Matrisin satir sayisini girin:");
    scanf("%d",&satir);
    printf("matrisin sutun sayisini girin:");
    scanf("%d",&sutun);
int **matris;
matris=(int **)malloc(satir*sizeof (int));
if(matris==NULL){
    printf("Bellek alani tahsis edilemedi");
    exit(0);
} else {
    for (int i = 0; i < satir; ++i) {
        matris[i] = (int *) malloc(sutun * sizeof(int));
    }
    for (int i = 0; i < satir; ++i) {
        printf("%p\n", matris[i]);
    }
}
    return 0;
}