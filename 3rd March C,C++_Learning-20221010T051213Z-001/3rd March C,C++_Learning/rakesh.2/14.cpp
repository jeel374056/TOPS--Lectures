#include<iostream>
using namespace std;
void data(int a,int b,int c,int d)
{
    cout<<"addition of "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"is"<<a+b+c+d<<endl;
}
void data(int a,int b,int c)
{
     cout<<"multiplication of "<<a<<"*"<<b<<"*"<<c<<"is"<<a*b*c<<endl;
}
void data(int a,int b)
{
     cout<<"division "<<a<<"/"<<b<<"is"<<(float)a/b<<endl;
}
int main()
{
    data(100,50,20,10);
    data(100,50,20);
    data(20,11);
    return 0;
}