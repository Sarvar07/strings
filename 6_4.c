//String4

#include <stdio.h>
int main() {  
    int a;
    printf("Enter number of capital letters to display: ");
    scanf("%d", &a);
   
    for(char i=65; i<=a+65; i++){
        printf("letter: %c \n", i);
    }
    return 0;
}