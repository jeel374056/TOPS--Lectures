#include<iostream>
using namespace std;

template <class t>
class A{
    t a;
    t b;
    public:
    void setdata(t a,t b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{
    A <float> a1;
    a1.setdata(2.3,3.2);
    a1.display();
return 0;
}