#include <stdio.h>
int main()
{
    char s1[55], s2[55];
    int i, j, k = 0;
    printf("Enter the name: ");
    gets(s1);

    for (i = 0; s1[k] != '\0'; k++)
        ;
    j = k;
    for (i = 0; i < k; i++)
    {

        s2[i] = s1[--j];
    }
    s2[i] = '\0';
    printf("\n reverse string : %s", s2);
}