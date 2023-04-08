#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    cout << "enter the  row:  ";
    cin>>row ;
    cout<< "entr the col: ";
    cin>>col;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        if(i==1||i==row||j==1||j==col)
        {
        cout<<("*");
        }
        else
        {
        cout<<(" ");
        }
       cout<<("\n");
    }
}

