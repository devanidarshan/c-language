#include<iostream>
using namespace std;
int main()
{
    int i,j,k=11;
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=5;j++)
      cout<<k++;
      cout<<"\n";
      k=k+5;
    }

}