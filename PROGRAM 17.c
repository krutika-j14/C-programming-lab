#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],b[100],c[200],rev[100];
    int i,j,len=0,flag=0;

    printf("enter first string: ");
    scanf("%s",a);

    printf("enter second string: ");
    scanf("%s",b);

    //length
    while(a[len] != '\0')
        len++;
    printf("\nlength=%d",len);

    //copy
    printf("\ncopy= ");
    for(i=0;a[i]!='\0';i++)
        printf("%c",a[i]);

    //concatenation
    for(i=0;a[i]!='\0';i++)
        c[i]=a[i];

    for(j=0;b[j]!='\0';j++)
        c[i+j]=b[j];

    c[i+j]='\0';

    printf("\nconcatenation=%s",c);

    //comparision
    i=0;
    while(a[i]==b[i]&&a[i]!='\0')
        i++;

    if(a[i]==b[i])
        printf("\nstrings are equal");
    else
        printf("\nstrings are not equal");

    //reverse
    printf("\nreverse= ");
    for(i=len-1;i>=0;i--)
    {
        rev[len-1-i]=a[i];
        printf("%c",a[i]);
    }
    rev[len]='\0';

    //palindrome
    for(i=0;a
    [i]!='\0';i++)
    {
        if(a[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("\npalindrome");
    else
        printf("\nnot palindrome");

    return 0;
}
