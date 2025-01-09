#include<stdio.h>
int main()
{
    int i,j, n, m,count=0;
    scanf("%d %d", &n, &m);

    long long a[n], b[m];
    for ( i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%lld", &b[i]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<=b[i])
            {
                count++;
            }
        }
        printf("%d ",count);
        count=0;

    }
    return 0;
}

