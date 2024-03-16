#include<stdio.h>
#include<string.h>
int main()
{
  int d;
  char a[100],b[100];
  gets(a);
  gets(b);
  strupr(a);
  strupr(b);
  d=strcmp(a,b);
  printf("%d\n",d);
  return 0;
}


