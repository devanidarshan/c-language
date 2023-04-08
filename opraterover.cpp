#include<iostream>
using namespace std;
class Box{
    int l,w,h;
    public:
    void setdata(int a,int b, int c)
    {0
        l = a, w = b, h = c;
    }
    int getdata()
    {
        return l*w*h;
    }
    Box operator+ (Box &n)
    {
        Box c;
        c.l =l + n.l;
        c.w =w + n.w;
        c.h =h + n.h;
        return c;
    }
};
int main()
{
    Box a,b,c;
    int volume =0;
    a.setdata(2,3,4);
    b.setdata(3,4,5);
    volume = a.getdata();
    cout<<"volume of Box A is:"<<volume<<endl;
    volume = b.getdata();
    cout<<"volume of Box B is:"<<volume<<endl;

    c = a + b;
    volume = c.getdata();
    cout<<"volume of Box C is:"<<volume<<endl;
    
}
