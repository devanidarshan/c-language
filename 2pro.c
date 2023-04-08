#include<stdio.h>
int main()
{
      int a[3][3],i,j;
      int b=0,c=0,d=0;
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
          printf("a[%d][%d]: ",i,j);
          scanf("%d",&a[i][j]);
          }
      }
      for(i=0;i<3;i++)
      {
               for(j=0;j<3;j++)
               {
               printf("%d",a[i][j]);
               }
        printf("\n");
      }
      for(i=0;i<3;i++)
       {
                 for(j=0;j<3;j++)
                {
                       if(i==j)
                       {
                              b+=a[i][j];
                       }
                       else if(i<j)
                       {
                              c+=a[i][j];
                       }
                       else if(i>j)
                       {
                              d+=a[i][j];
                        }
         }
    printf("\n");
    }
     printf("diagonal: %d",b);
     printf("\nupper triangle:%d ",c);
     printf("\nlower triangle:%d ",d);
}
 