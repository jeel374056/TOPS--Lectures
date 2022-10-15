#include<iostream>
using namespace std;

class Base{
    protected:
    float r,w,h;
    public:
    void setRadius(float r){
        this->r=r;
    }
    void setTri(float w,float h){
        this->w=w;
        this->h=h;
    }
};

class Circle:public Base{
    public:
    void areaCircle(){
        cout<<"Area of a circle is "<<3.14*r*r<<endl;
    }
};

class Triangle : public Base{

    public:
    void areaTriangle(){
        cout<<"Area of a Triangle is "<<0.5*w*h<<endl;
    }
};

int main()
{
    Circle c1;
    Triangle t1;
    c1.setRadius(4.5);
    c1.areaCircle();
    t1.setTri(3.4,6.7);
    t1.areaTriangle();
return 0;
}   