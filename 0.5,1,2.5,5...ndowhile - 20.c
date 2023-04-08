#include<stdio.h>
int main()
{
       float a,b=0.5,n;
       printf(" enter the n: ");
       scanf(" %f",&n);
      a=0.5;
      do
     {
        printf(" \n%.1f",b);
        b+=a;
        a++;
     }while(a<=n);
}