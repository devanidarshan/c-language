#include<stdio.h>
int display(int m,int s,int e,int total,float per)
{
    
    printf("\nmaths\tscience\tenglish\ttotal\tper\tgrade");
    printf("\n%d\t%d\t%d\t%d\t%.2f",m,s,e,total,per);
    if(m<35|| s<35|| e<35)
    {
        printf("    Fail  ");

    }
    else if(per>80)
    {
        printf("   A  ");

    }
    else if(per>70)
    {
        printf("   B  ");

    }
    else if(per>60)
    {
        printf("   C  ");
    }
    else
    {
        printf("   D  ");
    }
}
int calc(int m, int s, int e)
{
    int total;
    float per;
    total=m +s+e;
    per=(float)total/3;
    display(m,s,e,total,per);
}

int setdata()
{
    int maths,sci,eng;
    printf(" Enter maths marks: ");
    scanf("%d",&maths);
    printf(" Enter science marks: ");
    scanf("%d",&sci);
    printf(" Enter english marks: ");
    scanf("%d",&eng);
    calc(maths,sci,eng);
}   
int main()
{
    setdata();
}

