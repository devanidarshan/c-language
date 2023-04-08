#include<stdio.h>
int main()
{     
         int a[3][3]={{1,2,3},{6,4,3},{2,6,4}},i,j;
         printf("enter matrix :\n");
for(i=0;i<3;i++)
          {
                   for(j=0;j<3;j++)
                  {
                 printf("%d",a[i][j]);
}
                 printf("\n");
}
         printf("\ntranspose matrix :\n");
         for(i=0;i<3;i++)
          {
                   for(j=0;j<3;j++)
                  {
                 printf("%d",a[j][i]);
         }
                 printf("\n");
}
}