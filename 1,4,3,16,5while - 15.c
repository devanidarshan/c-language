#include<stdio.h>
int main()
{
   int i,n;
   i=1;
   printf (" enter the number n: ");
   scanf("%d",&n);
   while(i<=n)
   {
     if(i%2==0)
     printf("\t%d",i*i);
     else
     printf("%d",i);
     i++;
    }
}