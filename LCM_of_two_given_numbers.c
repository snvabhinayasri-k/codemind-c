#include<stdio.h>
int main()
{
    int i,a,b,g,l;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    if(a%i==0&&b%i==0)
    {
        g=i;
    }
    l=(a*b)/g;
    printf("%d",l);
    }
