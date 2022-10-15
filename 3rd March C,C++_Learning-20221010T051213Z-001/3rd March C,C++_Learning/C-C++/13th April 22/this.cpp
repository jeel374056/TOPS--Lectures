#include<iostream>
using namespace std;

class Base{
    int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

int main()
{
    Base b1;
    b1.setData(10,20);
    b1.display();
return 0;
}