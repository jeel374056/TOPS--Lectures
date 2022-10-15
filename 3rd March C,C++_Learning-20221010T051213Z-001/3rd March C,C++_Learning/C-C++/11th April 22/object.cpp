#include<iostream>
using namespace std;

class Emp{
    int id;
    string name;
    float salary;
    public:
    void setData(int x,string y,float z){
        id = x;
        name = y;
        salary = z;
    }
    void getData(){
        cout<<"Emp id is "<<id<<endl;
        cout<<"Emp name is "<<name<<endl;
        cout<<"Emp salary is "<<salary<<endl;
    }
};

int main()
{
    Emp e1;
    e1.setData(1,"Tops",12.34);
    e1.getData();
return 0;
}