#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
        printf("%d\n",i);
    printf("\n\n");
    for(int i=1 ,j=3; i<=n;i++,j=j+5)
        printf("%d\n",j);
    printf("\n\n");
    for(int i=1,k=20 ; i<=n ; i++,k=k-6)
        printf("%d\n",k);
    printf("\n\n");
    for(int i=1,l=19 ; i<=n ; i++,l=l+8)
        printf("%d\n",l);
    return 0;
}
