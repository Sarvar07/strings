
#include <stdio.h>
#include <string.h>


int main(){

    char stroka[100];

    printf("Snachalo bilo slovo-: ");
    fgets(stroka,100,stdin);

    for(int i=0; stroka[i]!=0; i++)
    {
        if (stroka[i]>='A'&& stroka[i]<='Z'){
            stroka[i] = stroka[i] + 32;
                  

        }else if (stroka[i]>='a'&& stroka[i]<='z'){
            stroka[i] = stroka[i] - 32;
        }

    }

    
    printf(" %s", stroka);

    return 0;
}