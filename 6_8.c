#include <stdio.h>

int main (){

    char element;
    int n;

    printf("element: ");
    scanf("%c", &element);

    printf("vvod tsifru n: ");
    scanf("%d", &n);

        for(int i=0; i<n; i++){
            printf("%c", element);
        }

        printf("\n");


    return 0;

}