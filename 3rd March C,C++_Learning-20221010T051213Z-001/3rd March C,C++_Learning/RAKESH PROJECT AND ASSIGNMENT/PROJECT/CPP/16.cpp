#include<iostream>
#include<string.h>
using namespace std;
class addstring
{
    char a[20];
    public:
    void setstring()
    {
        cout<<"enter string 1 =";
        cin>>a;
    }
    void addstring()
    {
        cout<<"string 1 ="<<a<<endl;
    }
    addstring operator+(addstring s)
    {
        string c;
        strcat(a,s,a);
        cout<<"concated string is ="<<endl;
    }
};
int main()
{
    addstring s[20].s1[100];
    s[20].addstring();
    s1[20].addstring();
    s[20]+s1[20];
    return 0;
}