#include<stdio.h>
int main()
{
    int eng[5],sci[5],com[5];
    int  total[5];
    int avg[5],i;
    for(i=0;i<5;i++)
   {
      printf(" enter eng [%d]:  ", i);
      scanf("%d",&eng[i]);
   }
     for(i=0;i<5;i++)
    {
     printf("enter sci[%d]: ",i);
      scanf("%d",&sci[i]);
     }
      for(i=0;i<5;i++)
     {
        printf("enter com[%d]:  ",i);
        scanf("%d",&com[i]);
      }
   
       printf("\n\teng\tsci\tcom\ttotal\tavg\tgrade");
         for(i=0;i<5;i++)
   {
total[i]=eng[i]+sci[i]+com[i];
	avg[i]=total[i]/3;
        printf("\n\t%d\t%d\t%d\t%d\t%d\t",eng[i],sci[i],com[i],total[i],avg[i]);

        if(eng[i]<35||sci[i]<35||com[i]<35)
        {
           printf("fail");
       }
          else if (avg[i]>80)
      {
           printf(" A grade ");
       }
           else if(avg[i]>70)
       {
           printf(" B grade ");
       }
           else if(avg[i]>60)
       {
           printf(" C grade ");
       }
          else

       {  
           printf(" D grade ");
       }
     }
   }   
       