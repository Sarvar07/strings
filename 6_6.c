//String6

#include <stdio.h>
int main()
{
    char a;
    printf("Vvod dannix: ");
    scanf("%c", &a);

    if (a >= 48 && a <= 57)
    {
        printf("%c  tsifra\n", a);
    }
    if (a >= 65 && a <= 90)
    {
        printf("%c bukva\n", a);
    }
     if (a >= 97 && a <= 122)
    {
        printf("%c bukva\n", a);
    }else
    {
        printf("0\n");
    }

return 0;
}