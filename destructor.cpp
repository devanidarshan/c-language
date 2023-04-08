#include<iostream>
using namespace std;
class test{
     public:
    test()
    {
        cout<<"Default constructor is called....."<<endl;
    }
    ~test()
    {
        cout<<"Default Destructor is called....."<<endl;
    }
    test(int a)
    {
        cout<<"Parameterized constructor is called.....\n value of a is:"<<a<<endl;
    }
    test(char a)
    {
        cout<<"Parameterized constructor is called.....\n char of a is:"<<a<<endl;
    }
};

int main()
{
    test a,b(50);
}