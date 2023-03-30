#include<stdio.h> ///vowel,consonent,word,digit
int main()
{
    int i,v,c,w,d;
    char line[10000];
    gets(line);
    i=v=c=w=d=0;
    while(line[i]!='\0')
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
            v++;
        else if(line[i]>='a' && line[i]<='z')
            c++;
        else if(line[i]==" ")
            w++;
        else if(line[i]>='0' && line[i]<='9')
            d++;
    i++;
    }
    printf("vowel =%d\n",v);
    printf("consonent =%d\n",c);
    printf("word =%d\n",w);
    printf("Digit =%d\n",d);
}
