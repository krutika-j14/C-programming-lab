#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],n,i,j,temp;

    printf("enter number of elements:");
    scanf("%d",&n);

    if(n<=0 || n>100)
    {
        printf("invalid size");
    }

    printf("enter array elements:");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    printf("original array:");

    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

    //ascending order
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(b[j]>b[j+1])
            {
               temp=b[j];
               b[j]=b[j+1];
               b[j+1]=temp;
            }
        }
    }
    printf("\nascending order: ");

    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }

    //descending order
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(b[j]<b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("\ndescending order: ");

    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
