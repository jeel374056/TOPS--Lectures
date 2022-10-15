#include<iostream>
using namespace std;

class Matrix
{
private:
    int a;
public:
    Matrix(int a)
    {
        this->a=a;
    }
    void display(){
        cout<<a<<endl;
    }

    Matrix operator-(Matrix base)
    {
        int temp;
        temp=a-base.a;
        return temp;
    }
};

int main(){
    Matrix m1(10),m2(20);
    Matrix m3=m1-m2;
    m3.display();
    return 0;
}