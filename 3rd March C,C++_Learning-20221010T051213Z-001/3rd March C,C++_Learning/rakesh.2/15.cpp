#include<iostream>
using namespace std;
class matrix
{
    int i;
    int a[3];
    public:
    void setmatrix()
    {
        cout<<"matrix first"<<endl;
        for(i=0;i<3;i++)
        {
            cout<<"enter the value"<<a["<<i<<"] "index is : "<<endl;
            cin>>a[i];
        }
    }
    void displaymatrix()
    {
        cout<<"1d matrix"<<endl;
        for(i=0;i<3;i++)
        {
            cout<<" "<<a[i];
            cout<<endl;
        }
    }
    matrix operator+(matrix s)
    {
        cout<<"addition of matrix"<<endl;
        int c[3];
        for(i=0;i<3;i++)
        {
            c[i]=a[i]+s.a[i];
            cout<<" "<<c[i]<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    matrix a,b;
    a.setmatrix();
    b.setmatrix();
    a.displaymatrix();
    b.displaymatrix();
    a+b;
    return 0;
}