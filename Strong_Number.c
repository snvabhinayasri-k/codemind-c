#include<stdio.h>
int main()
{
    int n,i;
    int f;
    int sum=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        
        f=1;
       rem=n%10;
       for(i=1;i<rem+1;i++)
       {
           f=f*i;
       }
       sum=sum+f;
       n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}