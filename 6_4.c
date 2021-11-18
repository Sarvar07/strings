//String4

#include <stdio.h>
int main() {  
    int a;
    printf("vvedite tsifru: ");
    scanf("%d", &a);
   
    for(char i=65; i<=a+65; i++){
        printf("bukva: %c \n", i);
    }
    return 0;
}