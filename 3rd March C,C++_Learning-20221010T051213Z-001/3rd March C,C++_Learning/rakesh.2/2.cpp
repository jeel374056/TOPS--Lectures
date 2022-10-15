// write a program to addition substraction multiplication and division of two number using class.
#include<iostream>
using namespace std;
class task
{
    int a,b;
    public:
    void operation()
    {
        void value();
        {
            cout<<"enter the value of a= ";
            cin>>a;
            cout<<"enter the value of b= ";
            cin>>b;
        }
        void add();
        {
            cout<<"addition of"<<"="<<a<<"+"<<b<<"="<<a+b<<endl;
        }
         void sub();
        {
            cout<<"subtraction of"<<"="<<a<<"-"<<b<<"="<<a-b<<endl;
        }
         void multi();
        {
            cout<<"multiplication of"<<"="<<a<<"*"<<b<<"="<<a*b<<endl;
        }
         void divi();
        {
            cout<<"division of"<<"="<<a<<"/"<<b<<"="<<a/b<<endl;
        }
    }
};
int main()
{
    task a;
    a.operation();
    return 0;
}