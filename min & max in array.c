#include<stdio.h>
int main()
{
    int a,min,max,sum=0;
    float avg;
    int array[5];
    for(a=0;a<5;a++)
    {
        scanf("%d",&array[a]);
        printf("Number = %d \n",array[a]);
        sum = sum+array[a];
    }
    avg=sum/a;
    min=max=array[0];
    for(a=1;a<5;a++)
    {
       if(min>array[a])
    {
        min=array[a];
    }
       if(max<array[a])
    {
           max=array[a];
    }
    }
    printf("%d\n",min);
    printf("%d\n",max);
    printf("%d\n",sum);
    printf("%f",avg);
}
