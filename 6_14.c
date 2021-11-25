
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    
    char slova[100];

    printf("vvod dannix : ");
    fgets(slova, 100, stdin);

    int obyom_slov = strlen(slova)-1;
    printf("\n");
    
    int k=0;
    for (int i = 0; i < slova[i]; i++)
    {
        if (slova[i]>=65 && slova[i]<=90){
        k++;    }
    }
    
    printf(" kolichestvo zaglavnix bukv:%d\n", k);
    printf("\n");

    return 0;
}