#include<stdio.h>   ///toggle case of string
int main()
{
    int i=0;

    char line[10000];


    gets(line);

    while(line[i]!='\0')
    {
        if(line[i]>=65 && line[i]<=90)
        {
            line[i]=tolower(line[i]);
        }
        else if(line[i]>=97 && line[i]<=122)
        {
            line[i]=toupper(line[i]);
        }

        i++;
    }
    printf("%s",line);



}
