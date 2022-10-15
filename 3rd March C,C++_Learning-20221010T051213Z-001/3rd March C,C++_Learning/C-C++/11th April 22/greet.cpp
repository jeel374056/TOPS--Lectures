#include<iostream>
using namespace std;
// public:
// private:
class Greet{
    public:
    void display1(){
        cout<<"Good Morning"<<endl;
    }
    void display2(){
        cout<<"Good Afternoon"<<endl;
    }
    void display3(){
        cout<<"Good Evening"<<endl;
    }
};

int main()
{
    Greet g1;
    Greet g2;
    g2.display2();
    g1.display1();
    g1.display3();
    g1.display2();
return 0;
}