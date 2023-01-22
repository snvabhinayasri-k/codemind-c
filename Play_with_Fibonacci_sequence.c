#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("0 1 ");
    scanf("%d",&n);
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}
