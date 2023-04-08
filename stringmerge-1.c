#include<stdio.h>
int main()
{
      char s1[55],s2[55],i,j;
      printf("Enter the first string: ");
      gets(s1);
      printf("The first string is: %s",s1);
      printf("Enter the second string: ");
      gets(s2);
      printf("The second string is: %s",s2);

      for(i=0;s1[i]!='\0';i++){}
      printf("\n Length of your string is: %d",i);

      for(j=0;s2[i]!='\0';j++,i++){
      s1[i]=s2[j];
      }

      s1[i]='\0';
      printf("\nmerge : ");
      puts(s1);
      

}