#include <iostream>
using namespace std;
template <class t1, class t2>
class calculation
{
public:
    t1 a;
    t2 b;
    calculation(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void displaydata()
    {
        cout << "a= " << a << " b = " << b << endl;
    }
};
int main()
{
    calculation<int, float> c1(58, 69.36);
    calculation<float, string> c2(58.96, "great");
    calculation<string, int> c3("hello", 92);
    c1.displaydata();
    c2.displaydata();
    c3.displaydata();
    return 0;
}
/*
template<class t1><class t2>


*/