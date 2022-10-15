#include<iostream>
using namespace std;
// Overriding -> Run time binding
// Base obj. -> Base fun
// Derived obj. -> base fun,derived fun
// Base obj. -> derived fun -> x -> virtual fun

class Base{
    public:
    virtual void display(){
        cout<<"Good Morning"<<endl;
    }
};

class Derived:public Base{
    public:
    void display(){
        cout<<"Good Afternoon"<<endl;
    }
};

int main()
{
 Base b1;
 Derived d1;
 Base *p;
 p = &d1;
 p->display();

return 0;
}