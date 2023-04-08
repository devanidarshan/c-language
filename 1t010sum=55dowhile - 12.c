#include<stdio.h>
int main()
{
     int i,sum=0;
     i=1;
     do
   {
       sum+=i;
       printf("%d",i);
       i++;
       }while(i<=10);
       printf("\n toatl is : %d ",sum); 
}