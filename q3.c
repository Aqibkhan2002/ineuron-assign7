// check given no is in fibonacci series or not
#include <stdio.h>
int main()
{
    int n, s = 0,i, a = -1, b = 1;
    printf("enter n");
    scanf("%d", &n);
    for (i = 1; i > 0; i++)
    {
        s = a + b;
        a = b;
        b = s;
        if (s == n)
        {
            printf("yes, it is there");
            break;
        }
        if (s > n)
        {
            printf("no, it's not there");
            break;
        }
    }
    return 0;
}