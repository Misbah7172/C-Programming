#include<stdio.h>
#define N 1000
int main()
{
    int i,n,array[N],product=1;
    scanf("%d",&n);
    if(n>=7)
    {
        for(i=7;i<=n;i++)
        {
            scanf("%d",&array[i]);
            product=product*i;
        }
      printf("%d",product);
    }
    else
        printf("Invalid");
    return 0;
}
//have some logical mistake