#include<stdio.h>
int main()
{
    int i;
    i=0;
    do
    {
        printf("%c=%d",'A'+i,'A'+i);
        i++;
    } while (i<26);
    
}