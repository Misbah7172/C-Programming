main()
{
    int ang1,ang2,ang3,total;
    printf("C program to check whether a triangle can be formed by the given value of the angles\n\n");
    printf("Enter angle 1 :");
    scanf("%d",&ang1);
    printf("\nEnter angle 2 :");
    scanf("%d",&ang2);
    printf("\nEnter angle 3 :");
    scanf("%d",&ang3);
    total=ang1+ang2+ang3;
    if(total==180 && ang1>0 && ang2>0 && ang3>0)
        printf("\n\nTriangle is valid");
    else
        printf("\n\nTriangle is not valid");
}
