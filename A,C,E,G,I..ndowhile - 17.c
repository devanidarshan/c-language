#include<stdio.h>
int main()
{
    char i,A,Z;
    i='A';
    do
    {  
      if(i&1==1)
       printf("%c",i);
      i++;
      }while(i<='Z');
}   