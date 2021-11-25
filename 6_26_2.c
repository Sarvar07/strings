#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
unsigned long length;
int i, j, N, t=1;
char strng[] = "Pakhtakor";

printf("Enter N: ");
scanf("%d", &N);
length = strlen(strng);
if (length>N){
for(i=1; i<=length; i++){
    printf("%c", strng[i]);}
}
if (length<N){
 for (i=0;i<=length;i++){
    //strng[0]='.';
    
    printf("%c", strng[i]);
    }
 }
return 0;
}