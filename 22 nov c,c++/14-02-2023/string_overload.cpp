#include <iostream>
#include<string.h>
using namespace std;
class calculation
{
public:
    string n1;;
    string answer;
    void getdata()
    {
        cout<<"Enter String: ";
        getline(cin,n1);
    }
    void showdata()
    {
        cout<<"N1= "<<n1;
    }
    calculation operator+(calculation *obj)
    {
        answer=strcat(n1,obj.n1);
    }
};
int main()
{
    calculation c1, c2;
    c1.getdata();
    c2.getdata();
    c1 + c2;
    // c2 + c1;
    // c1.+(c2);

    return 0;
}