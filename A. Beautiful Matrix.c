#include <stdio.h>
#include <math.h>

int main()
{
    int a[5][5], i, j, r, c;


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                r = abs(2 - i);
                c = abs(2 - j);
                printf("%d\n", r + c);
            }
        }
    }

    return 0;
}
