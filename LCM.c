#include<stdio.h>
int main()
{
    int i,a,b,l,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    l=(a*b)/gcd;
    printf("%d",l);
    
}