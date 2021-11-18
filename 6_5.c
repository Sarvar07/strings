//String5

#include <stdio.h>
int main() {  
    int a;
    printf("Enter number of capital letters to display: ");
    scanf("%d", &a);
   
    for(char i=90; i>90-a; i--){
        printf("letter: %c \n", i);
    }
    return 0;
}