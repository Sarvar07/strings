#include <stdio.h>
#include <string.h>

int main (){

    char slovo1[100], slovo2[100];
    

    
    printf("vedite 1 slovo: ");
    scanf("%s", slovo1);

    printf("vedite 2 slovo: ");
    scanf("%s", slovo2);

    
    printf("%s %s\n", slovo1, slovo2);

    strcat(slovo1, slovo2);
    printf("%s\n", slovo1);


    return 0;
}