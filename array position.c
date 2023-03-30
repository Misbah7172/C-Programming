#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,input,min=INT_MAX,j;
    scanf("%d",&n);
    for(i=0 ; i<=n ; i++){
        scanf("%d",&input);
    if(input>min){
        min=input;
    }
    }
    printf("%d",min);

    min=0;
    for(j=0 ; j<n ; j++)
    {
        if(array[j] == min)
        {
            min=1;
            break;
        }
    }
    if(min==1)
    {
        printf("%d is found at position %d",min,j+1);
    }
    else
        printf("%d",min);
    return 0;
}
