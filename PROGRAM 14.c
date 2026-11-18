#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,key,i;
    int count=0;

    printf("enter number of elements:");
    scanf("%d",&n);

    if(n<=0 || n>100)
    {
        printf("invalid size");
        return 0;
    }

    printf("enter array elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element to search:");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("element found at position %d\n",i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("element not found");
    }
    else
    {
        printf("total frequency=%d",count);
    }

    return 0;
}
