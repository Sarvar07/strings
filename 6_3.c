//String3

#include <stdio.h>
int main() {  
    int a;
    printf("Enter ASCII number: ");
    scanf("%d", &a);
    printf("Previous character of %d is = %c\n", a, a-1);
    printf("Next character of %d is = %c\n", a, a+1);
    
    return 0;
}