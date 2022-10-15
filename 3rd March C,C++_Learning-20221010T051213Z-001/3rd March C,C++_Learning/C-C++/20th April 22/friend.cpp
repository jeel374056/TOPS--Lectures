#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void setData(int a){
        this->a=a;
    }
    friend void Add(A a,B b);
};

class B{
    int b;
    public:
    void setData(int b){
        this->b=b;
    }
    friend void Add(A a,B b);
};

void Add(A a,B b){
    int c = a.a + b.b;
    cout<<c;
}
int main()
{
    A a1;
    B b1;
    a1.setData(10);
    b1.setData(20);
    Add(a1,b1);
return 0;
}