#include <stdio.h>
#include <string.h>

int main(){

    char slova[] = "Sarvar";
    int poslednaya_bukva =strlen(slova);
    
    printf("%d kod_pervaoy_bukvi, %c pervaya_bukva", slova[0], slova[0]);
    printf("\n");
    printf("%d kod_posledney_bukvi, %c poslednaya_bukva\n" , slova[poslednaya_bukva-1], slova[poslednaya_bukva-1]);
    return 0;
}