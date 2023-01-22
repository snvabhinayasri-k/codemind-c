#include<stdio.h>
int main()
{
    int a,b,q,c=0,tc=0,r;
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=a;i<=b;i++)
    {
      q=i;
      c=0;
      tc=0;
      while(q!=0)
      {
          c++;
          r=q%10;
          if(r!=0&&i%r==0)
          {
              tc++;
          }
          q=q/10;
      }
      if(c==tc)
      {
          printf("%d ",i);
      }
    }
}
