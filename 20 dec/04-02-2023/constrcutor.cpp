#include <iostream>
using namespace std;
class student
{
public:
    int a, b;
    student()//deafult constructor
    {
        cout << "Parameter called\n";
        a=0;
        b=0;
    }
    ~student()
    {
        cout<<"Destructor called";
    }
};

int main()
{
    student s1, s2, s3;
    return 0;
}
/*
function declaration with definition

---nOrmal function
 functionname(paremeters)
{
    body
}

functionname(arguments)
-------constructor----------
constructor is nothing but just a special function
it will be declare within the class

there will be no return type in case of constructor because constructor never return anything

constructor name will be same as class name we will not able to define that name of constructor

constructor will be called automatically when object is defined

constructor will be used for initialization purpose

there will be more than one constructor within the same class but having different parameters

and one object will call only one constructor


types of constructor

default constructor(constructor without parameter)
parameterised constructor
copy constructor

    classname(classname &obj1)
    {

    }

    obj1(obj2);
    obj1=obj2;


void fun1(int a,int b)
{
    cout<<"A= "<<a<<"B= "<<b;
}

int main()
{
    x=58;
    y=69;
    fun1(x,y)

}

*/