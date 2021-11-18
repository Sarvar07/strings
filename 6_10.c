#include <stdio.h>

int main()
{

    char slova[] = "Judayam yahshi";
    int obem_slov = sizeof(slova) / sizeof(slova[0]);

    for (int i = obem_slov - 1; i >= 0; i--)
    {
        int belgi = slova[i];

        printf("%c", slova[i]);
    }
    printf("\n");

    return 0;
}