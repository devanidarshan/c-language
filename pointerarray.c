#include<stdio.h>
int main()
{
    int a[5]={10,30,50,80,90};
    int *p,i;
    p=&a;
    for(i=0;i<5;i++)
    {
        printf("%d\t%u\n",a[i],&a[i]);
       // printf("%d\t%u\n",*(p+i),(p+i));

    }
}