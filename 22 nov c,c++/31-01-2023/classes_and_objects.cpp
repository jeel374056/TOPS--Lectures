#include <iostream>
using namespace std;
class calculation
{
public: // after public colon colon colon
    // static int x;
    int a, b, answer;
    void getdata();
    void putdata()
    {
        answer = a + b;
        cout << "Answer= " << answer << endl;
    }
};
// int calculation::x=50;
void calculation::getdata()
{
    cout << "Enter Number : ";
    cin >> a >> b;
}
int main()
{
    calculation ob1, ob2, ob3;
    ob1.getdata();
    ob1.putdata();
    ob2.a = 85;
    ob2.b = 35;
    ob2.putdata();
    return 0;
}
/*
class should be deifned outside of main function
class classname
{
    public: //access specifier public private(deafult) protected
    variables //data members
    functions //member function or methods
    // methods is nothing but just a function inside class

};
never forget semicolon after class completion
and never add semicolor after function completion


object is made inside main()

classname objectname;
objectname.members

*/