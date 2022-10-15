#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display();
};

class Derived:public Base{
    public:
    void display(){
        cout<<"Good Morning..."<<endl;
    }
};
int main()
{
    Derived d1;
    d1.display();
return 0;
}