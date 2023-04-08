#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks>=75)
    {
        printf(" A grade: %d",marks);
    }
    else if(marks>=65 && marks<75)
    {
        printf(" B grade : %d",marks);
    }
    else if(marks>=55 && marks<65)
    {
        printf(" C grade : %d",marks);

    }
    else if(marks>=45 && marks<55)
    {
        printf(" D grade : %d",marks);
    }
    else
    {
        printf("fail");
    }
}