#include<stdio.h>
struct bill
{
    int codenumber, r,q;
    char prodname[50];
    float A,D,B,G,N;
};
int main()
{
      struct bill a[5];
      int i;
      for(i=0;i<2;i++)
      {
        printf("Enter the code number: ");
        scanf("%d",&a[i].codenumber);
        printf("Enter the product name: ");
        scanf("%s",&a[i].prodname);
        printf("Enter the rate: ");
        scanf("%d",&a[i].r);
        printf("Enter the quantity: ");
        scanf("%d",&a[i].q);
        printf("\n");
        
    }
    printf("codenumber\tprodname\trate\tquality\t\tamount\t\tdiscount\tbill\tgst\tnetbill\n");
    for(i=0;i<2;i++)
    {
        a[i].A=a[i].r * a[i].q;
        a[i].D=a[i].A*0.05;
        a[i].B=a[i].A-a[i].D;
        a[i].G=a[i].B*0.18;
        a[i].N=a[i].B+a[i].G;
        
        printf("\n%d\t\t%s\t\t%d\t%d\t\t%.2f\t%.2f\t\t%.2f\t%.2f\t%.2f",a[i].codenumber,a[i].prodname,a[i].r,a[i].q,a[i].A,a[i].D,a[i].B,a[i].G,a[i].N);

    }

}
        



