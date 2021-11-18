//String5

#include <stdio.h>
int main() {  
    int a;
    printf("vedite tsifru: ");
    scanf("%d", &a);
   
    for(char i=90; i>90-a; i--){
        printf("bukva: %c \n", i);
    }
    return 0;
}