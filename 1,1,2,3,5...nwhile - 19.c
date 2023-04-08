#include<stdio.h>
int main()
{
      int i ,n,a=0,b=1,c;
      printf(" enter the n: ");
      scanf("%d",&n);
      i=1;
      while(i<=n)
     {
        c=a+b;
        printf("%d",b);
        a=b;
        b=c;
        i++;
        }
}