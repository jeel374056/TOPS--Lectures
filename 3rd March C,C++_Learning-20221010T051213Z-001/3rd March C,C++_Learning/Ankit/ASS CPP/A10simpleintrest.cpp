#include<iostream>
using namespace std;

class intrest{
    int p;
    int y;
    float r;

    public:
    
    intrest(int p,int y,float r){
        this->p=p;
        this->r=float(r);
        this->y=y;
    }
    intrest(int p,int r,int y){
        this->p=p;
        this->r=r;
        this->y=y;
    }
    void SI()
    {
        cout<<"Principal:"<<p<<endl;
        cout<<"Rate:"<<r<<endl;
        cout<<"Year:"<<y<<endl;
        cout<<(p*r*y)/100<<endl;
    }
};

int main()
{
    intrest i1(2000,float(2.5),2);
    i1.SI();

    intrest i2(2000,2,5);
    i2.SI();
    return 0;
}