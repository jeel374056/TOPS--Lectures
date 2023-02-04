#include <iostream>
using namespace std;
class student
{
public:
    int age, marks;
    string name;
    void getdata()
    {
        cout << "Enter Name ,age,marks";
        getline(cin, name);
        cin >> age >> marks;
    }
    void showdata()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
        cout << "Marks is " << marks << endl;
    }
};

int main()
{
    student s1,s2;
    // s1.getdata();
    s1.showdata();
    return 0;
}
/*
class is always outside the main function
class classname
{
    public: //acess specifier public private protected
    variable declaration  //data members
    function() //member function  or  method
    {

    }
    function()
    {

    }
};


main()
{
    classname objectname;

}
class
objects
constructor
destructor
inheritance
polymorphism
encapsulation
abstraction

return value
functionanme
parameters
arguments
function calling

type of user defined function
4 types

*/