#include<iostream>
using namespace std;
class A
{
    public:
    int x=50;
    virtual void showvalue()
    {
        cout<<"Class A  x = "<<x<<endl;
    }
};
class B : public A
{
    public:
    int y=50;
    void showvalue()
    {
        cout<<"Class B  x = "<<y<<endl;
    }
};
int main()
{

    A a1;
    B b1;
    a1.showvalue();
    b1.showvalue();
return 0;
}
/*
pure virtual function

*/