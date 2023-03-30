#include<stdio.h>   ///concatenate
int main()
{
    int i=0,j=0,len=0;
    char line1[1000];
    char line2[1000];
    gets(line1);
    gets(line2);
//    strcat(line1,line2);
//    printf("%s",line1);
    while(line1[i]!='\0')
    {
        i++;
        len++;
    }
//    printf("%d",i);
    while(line2[j]!='\0')
    {
        line1[len+j]=line2[j];
        j++;
    }
    printf("%s",line1);

}
