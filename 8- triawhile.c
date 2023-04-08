#include<stdio.h>
int main()
{
      int i,j;
      char a='a';
      i=1;
     while(i<=5)
      {
       j=1;
       while(j<=i)
     {
        if(j%2==0)
        printf("%c",a-32);
        else
        printf("%c",a);
         a++;
          j++;
      }
        printf("\n");
        i++;
       }
}