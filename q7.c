// print all prime no's between 2 no's
#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter a,b");
    scanf("%d%d",&a,&b);
     for(i=a>b?b+1:a+1;i<(a>b?a:b);i++)
     {
        for(j=2;j<=i-1;j++)
          {
             if(i%j==0)
             break;
          }
            if(i==j)
            printf("%d\n",i);
     }
    return 0;
}