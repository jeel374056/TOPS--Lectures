#include<iostream>
using namespace std;
#define pi 3.14
void area(int r)
{
    cout<<"area of cicle is ="<<pi*r*r<<endl;   
}
void area(int i,int w)
{
    cout<<"area iof rectangle is = "<<i*w<<endl;
}
int main()
{
    area(12);
    area(8,5);
    return 0;
}