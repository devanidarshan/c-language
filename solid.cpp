#include<iostream> 
using namespace std;
class volume
{

public:
    volume(int a)
    {
        cout << "volume of square:" << a * a* a<< endl;
    }
    volume(double a)
    {
        cout << "volume of circle:" <<4.18*a*a*a<< endl;
    }
    volume(double a,double b,double c)
    {
        cout << "volume of box:" <<a*b*c << endl;
    }
};


int main()
{
   volume a(5),b(5.5),c(10,20,30);

}