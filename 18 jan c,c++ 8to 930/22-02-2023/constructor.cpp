#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b;
    calculation() // deafult constructor
    {
        cout << "Enter two VAlues: ";
        cin >> a >> b;
    }

    void addition()
    {
        int answer = a + b;
        cout << "Addition = " << answer;
    }
};
int main()
{
    calculation c1, c2, c3, c4, c5;
    return 0;
}
/*
constructor is a special method/function

returntype functionname([paramaters])
{
    bosy of the function
}

calling

a=functionname([])

constructor doesn't have return type it never returns anything

constructor name is same as class name exact copy

constructor will be called automatically whenever object is defined

clanname objectname;

in case of multiple constructors one object can call only one constructor

constructor is mainly used for initialization purpose

thers are three types of constructors

1)default constructor
2)parameterised constructor
3)copy constructor
*/