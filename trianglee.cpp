#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=25;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=sp;j++)
        {
        cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        sp--;
        cout <<"\n";
    }
}