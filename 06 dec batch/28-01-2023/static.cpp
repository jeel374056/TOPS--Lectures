#include<iostream>
using namespace std;
class demostatic
{
    public:
   static int a;
    void incre()
    {
        a++;
        cout<<"A= "<<a;
    }
};
int demostatic::a=50;
int main()
{
demostatic d1,d2,d3;
d1.incre();
d2.incre();
d3.incre();

return 0;
}