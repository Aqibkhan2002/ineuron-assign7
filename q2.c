//n terms of fibonacci series
#include<stdio.h>
int main()
{
  int n, s=0,i,a=-1,b=1;
  printf("enter n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    s=a+b;
    a=b;
    b=s;
    printf("%d",s);
  }
  


    return 0;
}