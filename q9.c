// given no is armstrong or not
#include<stdio.h>
int main()
{
   int n,restore,a,s=0;
   printf("Enter n");
   scanf("%d",&n);
   restore=n;
   while(n)
   {
     a=n%10;
     s=s+(a*a*a);
     n=n/10;
   }
   if(s==restore)
   printf("it's an armstrong no");
   else
   printf("it's not an armstrong no");
    return 0;
}