#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>

struct countries
{
    int population;
    int rainfall_a;
    char name[20];
    float area;
};    ///Country structure type

int displayAllCountriesinfoReverse(struct countries country[],int j,int n);
int searchACountry(struct countries country[],int j,int n);
int takeOneCountryInfoFromKeyboard(struct countries country[],int n);

int main()
{
    int i,j,n=0,N;
    int rainfall_amount;
    char ch;  ///ch=r/s/t/q
    struct countries country[N];
    printf("#Enter 'r' to take information of all the Countries.\n");
    printf("\n#Enter 's' to search a Country by rainfall amount.\n");
    printf("\n# Enter 't' to display the information of all the Countries in reverse index order.\n");
    printf("\n#Enter 'q' to quit/exit the menu system.\n");

    printf("\n\n==========Enter Your Choice : ");
    fflush(stdin);
    scanf("%c", &ch);


    switch(ch)
    {
    case 'r' :
        printf("Enter The Number of Country : ");
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            printf("\n\nEnter the Name of Country :");
            fflush(stdin);
            gets(country[i].name);
            printf("\nEnter the Population of Country in crore :");
            scanf("%d",&country[i].population);
            printf("\nEnter the Area of Country in sq.km :");
            scanf("%f",&country[i].area);
            printf("\nEnter the number of rainfall amount in mm :");
            scanf("%d",&country[i].rainfall_a);    ///number of rainfall amount
            n++;
        }
        printf("Total country = %d",n);
        break;
    case 's' :
            printf("No rainfall amount information is found. Please populate country information first.\n");
                break;
    case 't' :
            printf("No rainfall amount information is found. Please populate country information first.\n");
                break;
    case 'q' :
        printf("Exit the menu system..");
        break;
    default :
            printf("Invalid Input\n");
    }

    while(ch!='q')
    {
        printf("\n\n==========Enter Your Choice : ");
        fflush(stdin);
        scanf("%c", &ch);
    switch(ch)
    {
    case 'r' :
        printf("Enter The Number of Country : ");
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
                printf("\n\nEnter the Name of Country :");
                fflush(stdin);
                gets(country[i].name);
                printf("\nEnter the Population of Country in crore :");
                scanf("%d",&country[i].population);
                printf("\nEnter the Area of Country in sq.km :");
                scanf("%f",&country[i].area);
                printf("\nEnter the number of rainfall amount in mm :");
                scanf("%d",&country[i].rainfall_a);    ///number of rainfall amount
                n++;
        }
        printf("Total country = %d",n);
            break;
    case 's':
                 searchACountry(country,i,n);
            break;
    case 't' :
                displayAllCountriesinfoReverse(country,j,n);
            break;
    case 'q' :
            printf("Exit the menu system..");
            break;
    default :
        printf("Invalid Input");
        break;
        }
        }
}


int searchACountry(struct countries country[],int j,int n)
{
        int amount;
        printf("==========Enter Rainfall Amount to Search :");
        scanf("%d", &amount);
        for (j = 0; j < n; j++)
        {
            if (country[j].rainfall_a == amount)
            {
                printf("\n");
                printf("\n=====Name of The Country : %s\n",country[j].name);
                printf("=====Population of %s : %d\n",country[j].name,country[j].population);
                printf("=====Area of %s : %f\n",country[j].name,country[j].area);
                printf("=====Rainfall Amount of %s : %d mm\n",country[j].name,country[j].rainfall_a);
                printf("\n");
            }
            else if(country[j].rainfall_a != amount)
            {
                printf("%dmm Not Found for other countries\n",amount);
            }
        }
}

int displayAllCountriesinfoReverse(struct countries country[],int j,int n)
{
    printf("\n");
    printf("==========The Rainfall Amounts in Reverse Order : ");
    printf("\n\n");
    printf("COUNTRY NAME - COUNTRY POPULATION - COUNTRY AREA - RAINFALL AMOUNT\n");
    for(j=n-1;j>=0;j--)
    {
        printf("%-15s",country[j].name);
        printf("%-21d",country[j].population);
        printf("%-15f",country[j].area);
        printf("%d",country[j].rainfall_a);
        printf("\n");
    }

}

