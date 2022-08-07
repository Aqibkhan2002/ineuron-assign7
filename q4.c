//hcf of 2 no's
#include<stdio.h>
int main()
{
  int n1,n2,i;
  printf("Enter n1,n2");
  scanf("%d%d",&n1,&n2);
  for(i=n1>n2?n2:n1;i>0;i--)
  {
    if(n1%i==0 && n2%i==0)
    {
    printf("hcf = %d",i);
       break;
    }
  }
    return 0;
}