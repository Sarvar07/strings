#include <stdio.h>

int main()
{

    char salomlashish[] = "Assalomu alaykum ahvollaringiz yaxshimi";
    int salomlashish_olchami = sizeof(salomlashish) / sizeof(salomlashish[0]);

    for (int i = salomlashish_olchami - 1; i >= 0; i--)
    {
        int belgi = salomlashish[i];

        printf("%c", salomlashish[i]);
    }
    printf("\n");

    return 0;
}