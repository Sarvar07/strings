#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char stroka[100];

    printf("Satrni kiriting: ");
    fgets(stroka, 100, stdin);

    int obyom_stroki = strlen(stroka), N;

    printf("obyom stroki: %d\nN=", obyom_stroki);
    scanf("%d", &N);

    for(int i=0; i<obyom_stroki-1; i++){
        printf("%c", stroka[i]);
        for(int j=0; j<N; j++){
            printf("*");
        }
    }

    printf("\n");


    return 0;
}