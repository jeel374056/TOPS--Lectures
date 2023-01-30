#include <iostream>
using namespace std;
template <class t1>
class calculation
{
public:
    t1 a;
    t1 b;
    calculation(t1 m, t1 n)
    {
        a = m;
        b = n;
    }
    void addition()
    {
        t1 answer = a + b;
        cout << "Addition=" << answer;
    }
};
int main()
{
    calculation<int> obj1(35, 67);


    
    obj1.addition();
    calculation<float> obj2(54.23, 26.35);
    obj2.addition();
    return 0;
}