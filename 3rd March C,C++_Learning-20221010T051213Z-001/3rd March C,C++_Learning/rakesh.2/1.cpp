// write a program of fibonacci and factorial using class.      
#include<iostream>
using namespace std;
class fibo
{
     int a=0,b=1,c,d;
     public:
     void setdata()
     {
         int n;
         cout<<"enter n=";
         cin>>n;
         if(n==0||n==1)
         {
             cout<<a<<endl<<b<<endl;
         }
         else if(n>1)
         {
             cout<<a<<endl<<b<<endl;
             for(d=2;d<=n;d++)
             c==a+b;
             a=b;
             b=c;
             cout<<c<<endl;
         }
     }
};
class factorial
{
    int i,fact=1;
    public:
    void set()
    {
        int n;
        cout<<"enter the value of n=";
        cin>>n;
        for(i=1;i<=n;i++)
        {
           fact*=i;
        }
        cout<<"factorial of"<<n<<"="<<fact<<endl;
    }
};
int main()
{
    fibo a;
    a.setdata();
    cout<<"fatorial information"<<endl;
    factorial x;
    x.set();
    return 0;
}


