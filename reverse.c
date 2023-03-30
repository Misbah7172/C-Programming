#include<stdio.h>  ///reverse
int main()
{
    int i=0,j=0,len=0;
    char line1[1000];
    char line2[1000];
    gets(line1);
//    strrev(line1);
//    printf("%s",line1);
    while(line1[i]!='\0')
    {
        i++;
        len++;
    }
    //printf("%d",i);
    //line1[i-1]
    for(j=0,i=len-1;i>=0;i--,j++)
    {
       line2[j]=line1[i];
    }
    line2[j]='\0';
    printf("%s",line2);
}
