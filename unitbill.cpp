#include<iostream>
using namespace std;
int main()
{
    int unit;
    float bill;
    cout << "Enter the unit:  ";
    cin >> unit;
    if(unit<=100)
    {
        bill=unit*0.5+50;
    }
    else if(unit>100 && unit<=300)
    {
        bill=50+50+60+(unit-100)*0.8;
    }
    else
    {
         bill=50+50+60+160+(unit-300)*0.9;
    }
    if(bill>=300)
    {
        bill=bill+bill*0.15;
        cout << "\nAdditional charge is ="<< bill*0.15;
    }
    cout << "\nElectricity bill = "<< bill;


}