#include<stdio.h>
int main()
{
    int n,rev,r;
    scanf("%d",&n);
    rev=0;
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}