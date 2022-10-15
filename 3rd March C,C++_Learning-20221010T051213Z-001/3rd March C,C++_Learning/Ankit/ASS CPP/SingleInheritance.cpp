#include <iostream>
using namespace std;

class cricket
{
    int r, ar;

public:
    void display()
    {
        cout << "Total Run:";
        cout << "Averag Run:";
        cout << "Best performance";
    }
    void setdata(int r, int ar)
    {
        this->r = r;
        this->ar = ar;
    }
};
class bestman : public cricket
{
    
}