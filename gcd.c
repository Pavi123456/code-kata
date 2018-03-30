#include <stdio.h>
int gcd(int n, int m)
{
    if (n == 0 || m == 0)
       return 0;
 if (n == m)
        return a;
 if (n > m)
        return gcd(n-m, m);
    return gcd(n, m-n);
}
int main()
{
    int n = 100, m = 10;
    printf("GCD of %d and %d is %d ", n, m, gcd(n, m));
    return 0;
}
