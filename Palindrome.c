#include<stdio.h>
int main()
{
    int n,rev,rem;
    rev=0;
    
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}