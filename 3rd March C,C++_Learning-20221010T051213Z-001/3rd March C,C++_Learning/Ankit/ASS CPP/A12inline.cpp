#include<iostream>
using namespace std;

inline int cube(int a)
{
    return a*a*a;
}

int main()
{
    int a;
    cout<<"Enter The value of A:";
    cin>>a;
    cout<<cube(a);
    return 0;
}