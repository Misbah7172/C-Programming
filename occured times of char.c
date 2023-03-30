#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100],ch;
    int i,sum=0,size=0;
    printf("Enter sentences : ");
    gets(sen);
    for(i=0;sen[i]!='\0' ;i++)
        size++;
    printf("\nSize = %d\n",size);
    printf("Enter any character : ");
    scanf("%c",&ch);
    for(i=0; i<=strlen(sen) ;i++)
    {
        if(sen[i]== ch)
            sum=sum+1;
    }
    printf("%c has occered %d times",ch,sum);
    return 0;
}
