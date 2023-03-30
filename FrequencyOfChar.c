#include<stdio.h>
int main()
{
    char a[100],b;
    printf("Enter any string=");
    gets(a);
    printf("enter any Character=");
    scanf("%c",&b);
    int i,count=0;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==b)
        {
            count++;
        }

    }
    printf("Frequency of [%c] is [%d] times ",b,count);
}
