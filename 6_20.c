#include <stdio.h>
#include <string.h>
  
int main()
{   
    char str[100];
    char K;

    printf("son kiriting: ");
    fgets(str, 100, stdin);
    int str_olchami = strlen(str)-1;

        for(int i=str_olchami-1; i>=0; i--){
        int belgi = str[i];
    }

    printf("%s", str);
    return 0;
}