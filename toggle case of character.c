#include<stdio.h>    ///toggle case of character
int main()
{
    int i=0,j=0,cap=0,low=0;
    char line1[10000];
    char line2[10000];
    gets(line1);
    gets(line2);
    strupr(line1);
    strlwr(line2);
    printf("%s\n",line1);
    printf("%s",line2);
}
