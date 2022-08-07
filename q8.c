//next prime no of a given no
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n");
    scanf("%d",&n);
    for(i=n+1;i>0;i++)
    {
         for(j=2;j<=i-1;j++)
         {
             if(i%j==0)
             break;
         }
            if(i==j)
            {
                printf("%d",i);
                break;
            }
    }

    return 0;
}