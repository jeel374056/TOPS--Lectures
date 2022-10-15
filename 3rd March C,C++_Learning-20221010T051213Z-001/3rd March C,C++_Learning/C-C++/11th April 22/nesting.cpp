#include<iostream>
using namespace std;

class Cal{
    int a,b;
    public:
    void setData(){
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
    }   
    void Add(){
        cout<<a+b;
    }
};

int main()
{
    Cal c1;
        c1.setData();
    c1.Add();
return 0;
}