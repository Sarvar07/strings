#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>


int main(){

    printf("\n");
    char ism[100];
    bool number=false, dots=false, character=false; 
    printf("Satr kirit: ");
    fgets(ism, 10, stdin);

    int harf=0;

    for (int i = 0; i < ism[i]; i++)
    {
        if((ism[i] >= 65  && ism[i] <= 122)){
            printf("0\n");
            character = true;
            break;
        }

        if(isdigit(ism[i]))
        {
            number = true;
        }
        int nuqtami = ism[i];
        if(nuqtami == 46)
        {
            dots = true;
        }
    }

    if(number && dots && !character){
        printf("2\n");
    } else if(!dots && !character){
        printf("1\n");
    }

    return 0;
}