#include<stdio.h>
void sum()
{
    int eng,sci,com,total;
    float per;
    printf("Enter marks: ");
    scanf("%d%d%d", &eng,&sci,&com);
    total=eng+sci+com;
    per=total/3;
    printf(" percentage is :%.2f\n",per);
    printf("total is : %d",total);
}
int main()
{
    sum();

}


