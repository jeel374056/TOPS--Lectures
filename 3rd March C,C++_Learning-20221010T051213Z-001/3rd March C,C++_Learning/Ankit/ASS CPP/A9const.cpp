#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        
    }
};

int main()
{
    A a1(10,5);
    a1.display();
    return 0;
}