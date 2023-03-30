#include<stdio.h>
int main()
{
   int n,i,j,k;
   scanf("%d", &n);

   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
     {
       printf(" "); // blank space
     }

     for(k=1;k<=n;k++)
     {
       printf("*");
     }

     printf("\n");
   }

   return 0;
}
