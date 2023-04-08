#include<stdio.h>
int main()
{
        int i,j,k=1;
        i=1;
        do
      {
         j=1;
         do
        {     
           printf("%d",k++);
          j++;
         }while(j<=5);
         printf("\n");
         i++;
         }while(i<=5);
}