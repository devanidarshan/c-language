#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter the unit: ");
    scanf("%d",&unit);
    if(unit<=100)
    {
        bill=unit*0.6+50;

    }
    else if(unit>100&&unit<=300)
    {
        bill=50+60+(unit-100)*0.8;
    }
    else
    {
        bill=50+60+160+(unit-300)*0.9;

    }
    if(bill>300)
    {
        bill=bill+bill*0.15;
        printf("additional charge is: rs.2f\n",bill,0.15);

    }
    printf("electricity bill=rs. %.2f\n",bill);
}