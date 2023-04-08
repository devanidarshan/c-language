#include<stdio.h>
int main()
{
      int i,j;
      char ch='A';
      i=1;
      while(i<=5)
     {
        j=1;
        while(j<=5)
       {
          printf("%c",ch++);
          j++;
        }
         printf("\n");
         i++;
        }
}