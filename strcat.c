#include<stdio.h>///completed
#include<string.h>
int main()
{
    char a[10000],b[100000];
    gets(a);
    gets(b);
    strcat(a,b);
    puts(a);
}
