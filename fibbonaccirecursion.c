#include<stdio.h>
int fib(int n)
{
   int a=0,b=1,c,i,f;
   for(i=1;i<n;i++)
   {
    c=a+b;
    a=b;
    b=c;
   }   
}
int main()
{
    int a=0,b=1,c,i,n,f;
    printf(" Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=a+b;
        f=fib(n);
        printf(" \nFabbonacci of given number is: %d",b);
        a=b;
        b=c;
    }
}
