#include<iostream>
using namespace std;

int add(int n1,int n2);
int sub(int n1,int n2);
int multiplication(int n1,int n2);
int division(int n1,int n2);

int main()
{
    int n1,n2;
    cout<<"Enter The Value N1:";
    cin>>n1;
    cout<<"Enter The Value N2:";
    cin>>n2;
    cout<<"Addition="<<add(n1,n2)<<endl;
    cout<<"Substration="<<sub(n1,n2)<<endl;
    cout<<"Multiplication="<<multiplication(n1,n2)<<endl;
    cout<<"Division="<<division(n1,n2)<<endl;
    
}

int add(int n1,int n2)
{
    return n1+n2;
}
int sub(int n1,int n2)
{
    return n1-n2;
}
int multiplication (int n1,int n2)
{
    return n1*n2;
}
int division(int n1,int n2)
{
    return n1/n2;
}
