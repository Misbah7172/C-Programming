#include<stdio.h>
int main()
{
    int array[3][3],i,j,n,sum=0;
    float a,avg=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d,%d = ",i,j);
        scanf("%d",&array[i][j]);
        sum += array[i][j];

    }
    }
    a=i*j;
    avg=sum/a;
    printf("%d",sum);
    printf("Average = %f",avg);
}


