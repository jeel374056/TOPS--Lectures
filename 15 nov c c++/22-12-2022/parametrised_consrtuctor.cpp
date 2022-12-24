#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation() //deafult
    {
        cout<<"Enter Two Values";
        cin>>a>>b;
        int add=a+b;
        cout<<"Addition= "<<add;
    }
    calculation(int r)
    {
        cout<<"area of circle= "<<3.14*r*r;
    }
    calculation(int l,int b)
    {
        cout<<"Area of rectnagle= "<<l*b;
    }
};
int main()
{
    
    calculation obj1,obj2(5),obj3(20,15);
    return 0;
}