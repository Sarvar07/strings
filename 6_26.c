#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>


int main(){

    int N, ortiqchasi=0;
    char eski_satr[1000];

    printf("N= ");
    scanf("%d", &N);

    printf("Satrni kiriting ");
    scanf("%s", eski_satr);

    int eski_satr_uzunligi = strlen(eski_satr);
    char yangi_satr[100]="";
    ortiqchasi = (N-eski_satr_uzunligi)*-1;
    printf("%d", eski_satr_uzunligi);
    printf("%d", ortiqchasi);


    if(ortiqchasi>0){
        for(int i=ortiqchasi; i<eski_satr_uzunligi; i++){
            char belgi = eski_satr[i];
            strncat(yangi_satr, &belgi, 1);
        }
    }

    printf("\n%s", yangi_satr);

    return 0;
}