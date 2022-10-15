#include<iostream>
using namespace std;
// function overloading -> Static Binding

void display()
{
    cout<<"Display function calling.."<<endl;
}
void display(int a)
{
    cout<<"The value of a is "<<a<<endl;
}
void display(int a,int b)
{
    cout<<"Addition of a and b is "<<a+b<<endl;
}


int main()
{
    display();
    display(6);
    display(4,5);
return 0;
}