#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,f=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}

