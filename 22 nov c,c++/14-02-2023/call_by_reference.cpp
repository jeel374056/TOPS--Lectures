#include<iostream>
using namespace std;
void getdata(int &a,int b)
{
    a=a+1;
    b=b+1;
    cout<<"A= "<<a;
    cout<<"B = "<<b;
}
int main()
{
int x=10;
int y=20;
getdata(x,y);
cout<<"X= "<<x<<"Y= "<<y;
return 0;
}