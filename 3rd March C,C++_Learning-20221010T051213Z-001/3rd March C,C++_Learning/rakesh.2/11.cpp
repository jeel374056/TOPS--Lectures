#include<iostream>
using namespace std;
class si
{
    int p;
    float r;
    int y;
    public:
    int si()
    {

    }
    void si()
    {
        this->p=p;
        this->r=(float)r;
        this->y=y;
    }
    void si(int p,int r,int y)
    {
        this->p=p;
        this->r=r;
        this->y=y;
    }
    void si()
    {
        cout<<"principal ammount= "<<p<<endl;
        cout<<"interest rate= "<<r<<endl;
        cout<<"year= "<<y<<endl;
        cout<<"simple intrest ammount ="<<(p*r*y)/100<<endl;
        cout<<endl;
    }
};
int main()
{
    si a(100000,float(2.5),5);
    a.si();
    si b(100000,14,5);
    b.si();
    return 0;
}