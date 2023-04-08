#include<stdio.h>
int main()
{
    int i,j,sp=25;
    i=1;
    while(i<=5)
    {
       j=1;
       while(j<=sp)
      {
         printf(" ");
          j++;
        }
          j=1;
         while(j<=(2*i-1))
         {
              printf("*");
              j++;
         }
	sp--;
              printf("\n");
              i++;
         }
           i=6;
sp = sp+1;
           while(i>=1)
         {
             j=sp;
             while(j>=1)
       {
             printf(" ");
             j--;
         }
             j=2;
            while(j<=2*(i-1))
        {
            printf("*");
            j++;
        }
	sp++;
            printf("\n");
            i--;
        }
}