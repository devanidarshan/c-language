#include<stdio.h>
int rev (int n,int r)
{
    r=0;
    return r;
}
int main()
{
    int x,r,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=(r*10)+(n%10);
        n=n/10;
        rev(x);

    }
    printf("Reverse number is: ",x);

}
    
    
    
/*    while(n>0)
   
    {
        r=(r*10)+(n%10);
        n=n/10;
        
    }
    return r;
    
}
int main ()
{
    int x;
    x= rev();
    printf(" Reverse number is: %d\n",x);
}
*/




