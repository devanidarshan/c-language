#include<stdio.h>
int main()
{
    int oddsum=0,evensum=0,total=0;
    int i,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements: ");
     for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
      for(i=0;i<size;i++)
     {
      total=total+arr[i];
      if(arr[i]%2==1)
      evensum=evensum+arr[i];
      else
      oddsum=oddsum+arr[i];
       }
        printf(" the sum of odd numbers are : %d",oddsum);
        printf("\nthe sum of even numbers are : %d",evensum);
        printf("\nthe sum of total numbers are : %d",total);
}
   