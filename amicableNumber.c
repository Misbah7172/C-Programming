#include<stdio.h>
int main()
{
    int i;
    int num,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0){
        printf("%d\n",i);
        sum= sum+i;
        }
    }
    int total=sum-num;
    printf("\n\n%d",total);
}
