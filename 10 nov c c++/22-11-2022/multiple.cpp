#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void getradius()
    {
        cout << "Enter Radius";
        cin >> x;
        float area = 3.14 * x * x;
        cout << "Area of cirlce= " << area;
    }
};
class B 
{
public:
    int l;
    void getsquare()
    {
        cout << "Enter Length ";
        cin >> l;
        float arae_of_square = l * l;
        cout << "Area Of square " << arae_of_square;
    }
};
class C :public A,public B
{
public:
    int lenght, breadth;
    void rectangle()
    {
        cout << "Enter length and breadth ";
        cin >> lenght >> breadth;
        float area_of_rect = lenght * breadth;
        cout << "Area Of rectangle " << area_of_rect;
    }
};
int main()
{
   
   A obj1;
   obj1.getradius();
   B obj2;
   obj2.getsquare();
   C obj3;
   obj3.getradius();
   obj3.getsquare();
   obj3.rectangle();
    
    return 0;
}
/*
Area of cirlce=pi*r*r
area of square=l*l
area of rectangle=l*b;
*/