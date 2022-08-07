// print all armstrong no's under 1000
#include<stdio.h>
int main()
{
  int i,restore,a,s=0;
  for(i=1;i<=1000;i++)
  {
      restore=i;
      while(i)
      {
         a=i%10;
         s=s+(a*a*a);
         i=i/10;
      }
       if(restore==s)
       printf("%d\n",restore);  
       i=restore;
  }
    return 0;
}