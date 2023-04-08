#include<stdio.h>
void largest()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("largest value is: %d",a);

    }
    else if(b>c)
    {
         printf("largest value is: %d",b);
    }
    else
    {
        printf("largest value is: %d",c);
    }
    
}
int main()
{
    largest();
}