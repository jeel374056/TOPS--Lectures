#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    Rectangle(int len, int wid)
    { // parameterised constructor
        length = len;
        width = wid;
    }

    void area()
    {
        cout << length * width << endl;
    }

    // overloading ++ operator
    Rectangle operator++(int)
    {
        length++;
        width++;
    }

    //   classname operator ++

    // overloading -- operator
    Rectangle operator--(int)
    {
        length--;
        width--;
    }
};

int main()
{
    Rectangle r(3, 5);
    r.area();
    r++;
    r.area();
    r++;
    r.area();
    r--;
    r.area();
    return 0;
}

// 8+9=17
// class A
// class B

// A obj1
// B obj2
// B obj3
// obj3=obj1+obj2