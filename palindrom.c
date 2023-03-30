#include<stdio.h>
int palindrom(char a[])
{
   int i,sen;
   for(i=0;a[i]!='\0';i++)
   sen++;
int flag=0;
for(i=0;i<sen/2;i++)
{
    if(a[i]==a[sen-i-1])
        flag=1;

}
if(flag==0)
    return flag;
else
    return flag;
}
int main()
{
    char a[1000];
    gets(a);
    int f;
    f=palindrom(a);
    if(f==0)
        puts("No");
    else
        puts("Yes");
}
