#include<iostream>
using namespace std;
int main()
{
    float basic,hra,da,GROSS;
    cout << "Enter the basic: ";
    cin >> basic;
    if(basic<=5000)
    {
        hra=basic*8/100;
        da=basic*20/100;
    } 
    else if(basic<=10000)
    {
        hra=basic*12/100;
        da=basic*30/100;
    }
    else if(basic<=15000)
    {
        hra=basic*15/100;
        da=basic*40/100;
    }
    else
    {
        hra=basic*20/100;
        da=basic*50/100;

    }
    GROSS=basic+hra+da;
    cout << GROSS;
    
    
}