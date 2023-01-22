#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    int t=s,rem,sum=0;
    if(s>9)
    {
        while(s!=0)
        {
            rem=s%10;
            sum=sum+rem;
            s=s/10;
        }
        int temp=sum,r1,s1=0;
        if(sum<10)
        {
            printf("%d",sum);
        }
        else
        {
            while(sum!=0)
            {
                r1=sum%10;
                s1=s1+r1;
                sum=sum/10;
            }
            printf("%d",s1);
        }
    }
    else
    {
        printf("%d",s);
    }
}

