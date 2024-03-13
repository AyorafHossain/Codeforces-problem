#include<stdio.h>
#include<math.h>
int main()
{
    long long int m, n, a,total,x,y;
    scanf("%lld %lld %lld", &m, &n, &a);
    x = ceil((double)m / a);
    y = ceil((double)n / a);
    total = x * y;
    printf("%lld\n", total);
    return 0;
}
