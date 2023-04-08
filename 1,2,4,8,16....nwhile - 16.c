#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf(" enter the number n: ");
    scanf("%d",&n); 
    i=1;
    while(i<=n)
   {
      sum+=i;
      printf(" %d",i);
      i*=2;
      printf("\n",sum);
    } 
       
}