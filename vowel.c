#include<stdio.h>
int main()
{
    char c;
    printf(" Enter the alphabets: ");
    scanf("%c",&c);
    if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u')
    {
         
         printf("c is a vowel :%c",c);
    }
    else 
    {
        
        printf("c is a consonant : %c",c);
    }
    

}