#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i;
    int sum=0,max,min;
    int even=0,odd=0;
    float mean;

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

    max=min=a[0];

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];

        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];

        if(a[i]%2==0)
            even++;

        else
            odd++;
    }

    mean=(float)sum/n;

    printf("sum=%d\n",sum);
    printf("average=%.2f\n",mean);
    printf("largest=%d\n",max);
    printf("smallest=%d\n",min);
    printf("even elements=%d\n",even);
    printf("odd elements=%d\n",odd);

    return 0;
}
