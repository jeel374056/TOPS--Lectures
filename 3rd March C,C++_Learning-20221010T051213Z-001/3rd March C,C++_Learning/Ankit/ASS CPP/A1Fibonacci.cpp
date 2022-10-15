#include<iostream>
using namespace std;

class fibonacci
{
    
    public:
    int a,b,c;
    void main(int);

};
void fibonacci:: main(int n)
{
    a=0;
    b=1;
    cout<<a<<" "<<b;
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        cout << " " << c;
        a=b;
        b=c;
    }
}


int main()
{
    int n=9;
    fibonacci f1;
    f1.main(n);
    return 0;
}