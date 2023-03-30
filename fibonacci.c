#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1;
    int sum=t1+t2;
    scanf("%d",&n);

    for(i=3;i<=n;++i)
    {

        t1=t2;
        t2=sum;
        sum=t1+t2;
    }
    printf("%d",sum);
    // printf("fibonacci %d = %d",n,sum);
    return 0;
}
