#include <iostream>
using namespace std;
class student
{
public:
    student() //default constructor
    {
        cout << "constructor Called";
    }

    void showdata()
    {
        cout << "Me ek user defined function hu";
    }
};

int main()
{
    student ob1;
    ob1.showdata();
    return 0;
}
/*
function declare
function define

returntype functiobnanem (parameters)
{
    body
}

function calling

    functionname(parameters)



consrtuctor is also a function but special

consrtuctor doesn't have return value
constructor we cannot give name its name is same as clasname

constructor will be called automatically we don't have to call constructor
wehn object is define

Types of constructor
1_deafult constructor
2_paramaterised constructor
3_copy constructor


*/