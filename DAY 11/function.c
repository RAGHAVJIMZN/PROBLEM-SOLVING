#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    if (a == b)
        return a;
    else if ( a<0 || b<0){
        printf("One of the Number is -ive i can't find gcd\n");
    }
    else
    {
        if (a > b)
            return gcd(a - b, b);
        else
            return gcd(a, b - a);
    }
}
int abs(int a)
{
    if (a >= 0)
        return a ;
    else    
    return a ;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n",abs(a));
    printf("%d", gcd(a, b));
}