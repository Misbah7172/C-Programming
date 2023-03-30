#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);


    for(i=1;i<=n;i++) //X
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            /*N-if(j==1 || j==n || (i+j)==(n+1))
            H-if(j==1 || j==n || i==(n+1)/2)*/
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");


    for(i=1;i<=n;i++)//N
    {
        for(j=n;j>=1;j--)
        {
            if(j==1 || j==n || (i+j)==(n+1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");


    for(i=1;i<=n;i++)//H
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==(n+1)/2)
            {
                printf("H");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");


    for(i=1;i<=n;i++)//A
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");


    for(i=1;i<=n;i++)//M
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
