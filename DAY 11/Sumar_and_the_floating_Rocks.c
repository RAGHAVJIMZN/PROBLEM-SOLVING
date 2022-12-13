int abs(int a)
{
    if (a >= 0)
        return a;
    else
        return a;
}
int gcd(int a, int b)
{
    if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}
int solve(int x1, int y1, int x2, int y2)
{
    if (x1 == x2)
        return (abs(y2 - y1) - 1);
    else if (y1 == y2)
        return (abs(x1 - x2) - 1);
    else
        return gcd(abs(y2 - y1), abs(x2 - x1)) - 1;
}