#include<stdio.h>
int main()
{
    int a=20,*p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf(" Value of a is: %d",a);
    printf("\n addresses of a is:  %u",&a);
    printf("\n addresses of a using p is: %d",p);
    printf("\n addresses of p is: %u",p);
    printf("\n value of a using p is: %d",*p);
    printf("\n addresses of p is using q is: %d",q);
    printf("\n addresses of q is : %u",&q);
    printf("\n value of a using q is : %d",**q);
    printf("\n addresses of q using r is: %d",r);
    printf("\n addresses of r is: %u",r);
    printf("\n value of a using r is: %d",***r);

}
