#include <stdio.h>
#include <math.h>
int arr[10000000];

int main()
{
    int i, j;
    arr[0] = arr[1] = 1;
    for (i = 2; i * i <=10000000; i++)
    {
        if (arr[i] == 0)
        {
            for (j = i * 2; j <= 10000000; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    int n;
    scanf("%d", &n);

    long long in;
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &in);
        int t = (int)sqrt(in);
        if (t == sqrt(in) && arr[t] == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

