#include<stdio.h>
int main()
{
     int i,n;
     printf( " enter the number n: ");
     scanf("%d",&n);
     i=0;
     do
    {
       if(i%2==1)
       printf("%d",i);
       i++;
      }while(i<=50);
}