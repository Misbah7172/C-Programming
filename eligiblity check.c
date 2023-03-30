#include<stdio.h>
int main()
{
    int math,phy,che,total1,total2;
    printf("C program to find the eligibility of admission for a engineering course based on the criteria\n\n");
    printf("Eligible criteria for an engineer :\n Marks in math>=65\n Marks in physics>=55\n Marks in che>=50\n Total>=180\n or\n Total math and physics>=140\n");
    printf("Enter marks of math :");
    scanf("%d",&math);
    printf("Enter marks of physics :");
    scanf("%d",&phy);
    printf("Enter marks of chemistry :");
    scanf("%d",&che);
        total1=math+phy+che;
    total2=math+phy;
    if(total1>300)
        printf("Tor mar heda dios de ne");
    else if(math>=65 && phy>=55 && che>=50 && total1>=180 || total2>=140)
        printf("Eligible to get admission for engineering courses");
    else
        printf("Not eligible");
    return 0;
}


