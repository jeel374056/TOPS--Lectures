#include<iostream>
using namespace std;

class Base
{
    int a,b;
    public:
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display1()
    {
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    void display2()
    {
        cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
    void display3()
    {
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
    void display4()
    {
        cout<<"Divison of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};



int main()
{
    Base b1;
    b1.setdata(10,20);
    b1.display1();
    b1.display2();
    b1.display3();
    b1.display4();
    return 0;
}