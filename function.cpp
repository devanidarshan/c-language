#include<iostream>
using namespace std;
class Sum{
    public:
   void Add()
    {
        cout<<"Default Constructor is called..."<<endl;
    }
   void Add(int x)
    {
        cout<<"Addition of x is: "<<x + 10 <<endl;
    }
   void Add(int x, int y)
    {
        cout<<"Addition of x and y is: "<<x + y<<endl;
    }
   void Add(double x)
    {
        cout<<"Addition of x is: "<<x + 5<<endl;
    }

};
int main()
{
    Sum a;
    a.Add();
    a.Add(10);
    a.Add(10,20);
    a.Add(10.2);

}
