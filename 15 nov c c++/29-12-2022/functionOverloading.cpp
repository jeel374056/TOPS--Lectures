#include<iostream>
using namespace std;
class calculation
{
    public:
    int r,l,b,s,answer;
    void area()
    {
       cout<<"Enter Radius:" ;
       cin>>r;
       cout<<"Area of Circle="<<3.14*r*r;
    }
    void area(int s)
    {
        cout<<"Area of square="<<s*s;
    }
    void area(int l,int b)
    {
        cout<<"Area of rectangle="<<l*b;
    }
};
int main()
{
    calculation c1;
    c1.area();
    c1.area(25);
    c1.area(41,26);


return 0;
}