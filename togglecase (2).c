#include<stdio.h>
#define N 10100000
int main()
{
    char a[N];
    int i;
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]+32;
        }
        else
            a[i]=a[i]-32;
    }
    i++;
    printf("%s",a);
}
