#include<iostream>
using namespace std;

class Intrest{
    int p;
    float r;
    int y;
    public:
    Intrest(){}
    Intrest(int p,float r,int y){
        this->p=p;
        this->r=float(r);
        this->y=y;
    }
    Intrest(int p,int r,int y){
        this->p=p;
        this->r=r;
        this->y=y;
    }
    void SI(){
        cout<<p<<endl;
        cout<<r<<endl;
        cout<<y<<endl;
        cout<<(p*r*y)/100<<endl;
    }
};

int main()
{
    // Intrest i1(2000,float(0.6),7);
    Intrest i2(2000,12,7);
    // i1.SI();
    i2.SI();
return 0;
}