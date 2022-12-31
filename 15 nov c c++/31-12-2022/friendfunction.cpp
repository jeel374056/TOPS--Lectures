#include<iostream>
using namespace std;
class A{
    public:
    int x,y,z;
    A(){}
    A(int m,int n)
    {
        x=m;
        y=n;
    }
    friend void data(A);
};
void data(A a1)
{
    cout<<a1.x<<a1.y;
}
int main()
{
    A obj1(10,20);
    data(obj1);


return 0;
}