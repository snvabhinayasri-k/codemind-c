#include<stdio.h>
int main()
{
    int u;
    float b,c,tb,sc;
    scanf("%d",&u);
    if(u<199)
    {
        c=1.20;
    }
    else if(200<u && u<400)
    {
        c=1.50;
    }
    else if(400<u && u<600)
    {
        c=1.80;
    }
    else if(u>600)
    {
        c=2.00;
    }
    b=u*c;
    //printf("%.2f",b);
    if(b>400)
    {
        sc=0.15*b;
    }
    else
    {
        sc=100;
    }
    tb=sc+b;
    printf("%.2f",tb);
}
    