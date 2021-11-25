#include <stdio.h>
#include <string.h>


int main(){
    int counter=0;
    
    char element[] = "Toshkent";
    for (int i = 0; i < sizeof(element) / sizeof(element[0]); i++)
    {
        printf("%d-elment slova: %c\n", i + 1, element[i]);
        counter++;
    }
        printf("\nkolichestvo elementov : %d\n", counter);
        printf("\n");
      


    return 0;
}