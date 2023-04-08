#include<stdio.h>
int main()
{    
        int i,j;
        char a='A';
         i=1;
         do
      {
         j=1;
         do
       {
           if(i%2==0)
           printf("%c",a+32);
           else
           printf("%c",a);
           a++;
           j++;
          }while(j<=i);
           printf("\n");
           i++;
          }while(i<=5);
   }
           