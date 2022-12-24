#include <iostream>
using namespace std;

class calculation
{
public:
    int a, b, answer;
    calculation() // default consrtructor
    {
        cout << "Enter Two Values";
        cin >> a >> b;
    }
    void addition()
    {
        answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
int main()
{
    calculation obj1,obj3;
    obj1.addition();
    calculation obj2;
    obj2.addition();
    return 0;
}

/*
function declaration with definition
normal function
datataype functionname(parameters)
{
    body of the function
}
consrtuctor

    classname(parameters)
    {
        body
    }

function calling
constructor is called when object is defined

types of constructor

defualt constructor
parameterized consrtuctor
copy constructor
*/