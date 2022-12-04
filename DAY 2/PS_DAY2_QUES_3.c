#include <stdio.h>
void main()
{
    int i, j, n;
    char c;

    c = 65;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
        }
        c++;
        printf("\n");
    }
}