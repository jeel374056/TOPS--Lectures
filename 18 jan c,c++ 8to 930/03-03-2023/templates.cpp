#include <iostream>
using namespace std;
template <class T>
class calculation
{
public:
    T a, b;
    calculation(T x, T y)
    {
        a = x;
        b = y;
    }
    void addition()
    {
        T answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};

int main()
{
    calculation<int> c1(50, 60);
    calculation<float> c2(10.20, 29.36);
    c1.addition();
    c2.addition();
    return 0;
}
/*
Template syntax:
template<class t1>
class {}

calculation<int> c1;
calculation<float> c2;

*/