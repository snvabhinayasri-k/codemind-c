#include<stdio.h>
#include<math.h>
int main()
{
    int N,R,i;
    scanf("%d%d",&N,&R);
    for(i=1;i<=R;i++)
    {
        if(i%2!=0)
        {
            int c;
            c=N*i;
            printf("%d x %d = %d
",N,i,c);
        }
    }
}

