#include<iostream>
using namespace std;

template <class t1,class t2>
class A{
    t1 a;
    t2 b;
    public:
    void setdata(t1 a,t2 b){
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
    A <float,char> a1;
    a1.setdata(2.3,'a');
    a1.display();
return 0;
}