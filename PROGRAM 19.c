#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,i;
    int sum=0,largest,smallest;
    float average;

    printf("enter number of elements: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("invalid number of elements");
        return 0;
    }

    //dynamic memory allocation
    p=(int*)malloc(n*sizeof(int));

    if(p==NULL)
    {
        printf("memory allocation falied");
        return 0;
    }

    printf("enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    largest=smallest=*(p+0);

    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);

        if(*(p+i)<largest)
            largest=*(p+i);

        if(*(p+i)<smallest)
            smallest=*(p+i);
    }

    average=(float)sum/n;

    printf("\nsum=%d",sum);
    printf("\naverage=%.2f",average);
    printf("\nlargest=%d",largest);
    printf("\nsmallest=%d",smallest);

    //release allocated memory
    free(p);

    printf("\nmemory released successfully");

    return 0;
}
