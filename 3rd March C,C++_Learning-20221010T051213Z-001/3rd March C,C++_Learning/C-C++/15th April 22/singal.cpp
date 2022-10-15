#include<iostream>
using namespace std;

class Base{
    protected:
    int a,b;
    public:
    void displayBase(){
        cout<<"Base display function calling..."<<endl;
    }
    void setData(int a,int b){
        this->a =a;
        this->b =b;
    }
};

class Derived:public Base{
    public:
    void displayDerived(){
        cout<<"derived display function calling..";
    }
    void Add(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

int main()
{
    Derived d1;
    d1.setData(10,20);
    d1.Add();
    d1.displayBase();
    d1.displayDerived();
return 0;
}