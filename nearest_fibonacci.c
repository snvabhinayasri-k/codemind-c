#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    for(i=0;i<n;i++)
    {
     if(c>=n)
     {
        break;
     }
       c=a+b;
       a=b;
       b=c;
    }
    if(abs(n-a)==abs(n-c))
    {
        printf("%d %d",a,c);
    }
    else if(abs(n-a)>abs(n-c))
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",a);
    }
}