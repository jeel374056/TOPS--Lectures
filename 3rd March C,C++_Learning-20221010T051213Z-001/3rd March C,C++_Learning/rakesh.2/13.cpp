#include<iostream>
using namespace std;
inline int multi(int a,int b)
{
    return a*b;
}
inline int square(int a)
{
    return a*a;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    cout<<"multiplication of "<<4<<"and"<<5<<"is"<<multi(4,5)<<endl;
    cout<<"square of "<<6<<"is "<<square(6)<<endl;
    cout<<"cube of "<<4<<"is"<<cube(4)<<endl;
    return 0;
}