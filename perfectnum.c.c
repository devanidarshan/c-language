#include<stdio.h>
void perfect()
{
    int i=1,n,sum=0;
    printf(" Enter the number: ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
    printf("\n The %d is perfect number ",n);
    else
    printf("\n The %d is not a perfect number ",n);
}
int main()
{
    perfect();
}
