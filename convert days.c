#include<stdio.h>
int main()
{
    float year,week,day;
    printf("C Program to convert days to years, weeks and days\n\n\n");
    printf("Enter the number of days :");
    scanf("%f",&day);
    year=day/365;
    week=day/7;
    printf("Number of year : %f\n",year);
    printf("Number of week : %f",week);
    return 0;

}
