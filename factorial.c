#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int a,f;
    printf(" Enter the number: ");
    scanf("%d",&a  );
    f=fact(a);
    printf(" factorial of given number is : %d",f);
}