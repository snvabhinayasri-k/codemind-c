#include<stdio.h>
int main()
{
 int n,i;
  scanf("%d" ,&n); 
  int a=0,b=1,c,cnt=0;
   for(i=1;i<=n;i++)
 {
  c=a+b;
   if(c==n)
    {
	 cnt++;
	  break;
	   }
	    a=b;
		 b=c; 
		 } 
		 if(cnt==0)
		  {
		   printf("False" );
		    }
			 else 
			 {
			  printf("True" );
			   }
			   }