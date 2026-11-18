#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long fact=1;
    int a=0,b=1,c;

    printf("enter a number for factorial:");
    scanf("%d",&n);

    if(n<0)
    {
        printf("factorial is not possible");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("factorial = %lld\n",fact);
    }

    printf("\nenter number of fibonacci terms:");
    scanf("%d",&n);

    printf("fibonacci series:");

    for(i = 1; i <= n; i++)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
