#include<stdio.h>
int main()
{
    int p,v,t,n,count=0,s;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&p,&v,&t);
        s=p+v+t;
        if(s>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
