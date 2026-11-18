#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int fact(int n)
{
    if(n <=1)
        return 1;

    return n * fact(n - 1);
}

int power(int x, int n)
{
    if(n == 0)
        return 1;

    return x * power(x, n - 1);
}

int main()
{
    int ch,a,b,n;

    do
    {
        printf("\n1.gcd 2.lcm 3.factorial 4.power 5.exit");
        printf("\nenter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
           case 1:
            scanf("%d%d",&a,&b);
            printf("gcd=%d",gcd(a,b));
            break;
          case 2:
            scanf("%d%d",&a,&b);
            printf("lcm=%d",(a/gcd(a,b))*b);
            break;
          case 3:
            scanf("%d",&n);
            printf("factorial=%d",fact(n));
            break;
          case 4:
            scanf("%d%d",&a,&n);
            printf("power=%d",power(a,n));
            break;
          case 5:
            printf("exit");
            break;
          default:
            printf("invalid choice");
        }
    }while(ch!=5);

    return 0;
}
