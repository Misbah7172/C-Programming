#include<stdio.h>
int main()
{
    int x,y,z;      //x,y are numbers
    int p,q,r;    //for sum,sub,mul
    int a,b,i;    //for digit.a=result and b=mod
    float s,t;    //for div,mod
    scanf("%d%d",&x,&y);  /*variable declaration*/
    printf("sum=%d\n",p=x+y);
    printf("sub=%d\n",q=x-y);
    printf("mul=%d\n",r=x*y);
    printf("div=%f\n",s=x/y);
    printf("mod=%f\n",t=x%y);
    if(x>y)
    {
        printf("%d>%d\n",x,y);
    }
    if(x<y)
    {
        printf("%d<%d\n",x,y);
    }
    if(x==y)
    {
        printf("x and y are equal\n");
    }
    if(x%2==0)
    {
        printf("%d is even\n",x);
    }
    else
    {
        printf("%d is odd\n",x);
    }
    if(y%2==0)
    {
        printf("%d is even\n",y);
    }
    else
    {
        printf("%d is odd\n",y);
    }
    return 0;
}
