#include<iostream>
using namespace std;
class calc
{
    int a,b;
    public:
    calc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"addition of "<<a<<" + "<<b<<" is "<<a+b<<endl;
         cout<<"substraction of "<<a<<" - "<<b<<" is "<<a-b<<endl;
          cout<<"multiplication of "<<a<<" * "<<b<<" is "<<a*b<<endl;
           cout<<"division of "<<a<<" / "<<b<<" is "<<a/b<<endl;
        
    }
};
int main()
{
    calc a(20,11);
    a.display();
    return 0;
}