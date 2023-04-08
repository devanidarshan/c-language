#include<iostream>
using namespace std;
class Add{
    public:
    Add()
    {
        cout<<"Default Constructor is called..."<<endl;
    }
    Add(int x)
    {
        cout<<"Addition of x is: "<<x + 10 <<endl;
    }
    Add(int x, int y)
    {
        cout<<"Addition of x and y is: "<<x + y<<endl;
    }
    Add(double x)
    {
        cout<<"Addition of x is: "<<x + 5<<endl;
    }

};
int main()
{
    Add a(10), b(20,30), c (5.1),d;
}
