#include<stdio.h>    ///length of string
int main()
{
    int i=0,a,len=0;
    char ch[1000];
    gets(ch);
    while(ch[i]!='\0')
    {

        i++;
        len++;
    }
//    a=strlen(ch);
//    printf("%d",a);
    printf("%d",len);
}
