#include <stdio.h>
#include <math.h>
// string 22
int main (){

    int n,a=0;
            
    printf("son kiriting: ");
    scanf("%d", &n);

    while(n>0){
        a+=n%10;
        n/=10;
    }
    
    printf ("summa chisel %d\n", a);
    return 0;
}