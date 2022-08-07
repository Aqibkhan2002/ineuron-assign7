// 2 no's are co prime or not
#include <stdio.h>
int checkn1(int n);
int checkn2(int n);
int main()
{
    int n1, n2, s, k;
    printf("Enter n1,n2");
    scanf("%d%d", &n1, &n2);
    if (n1 % 2 != 0 && n2 % 2 != 0)
    {
            if (n1 > n2 ? n1 : n2 == 2 + (n1 > n2 ? n2 : n1))
        {
            s = checkn1(n1);
            k = checkn2(n2);
            if (s == 1 && k == 1)
                printf("no's are coprime\n");
            else
                printf("no's are not co prime\n");
        }
        else
            printf("no's are not co prime\n");
    }
    else
        printf("no's are not co prime\n");
    return 0;
}
int checkn1(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 2;
}
int checkn2(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 2;
}
