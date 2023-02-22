#include <iostream>
using namespace std;
class student
{
public:
    int rollno=98;
    string name;
    void getdata()
    {
        cout << "Enter roolno ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }
    void showdata()
    {
        cout << "Your Name is " << name << " yOur Rollno is " << rollno << endl;
    }
};
int main()
{
    student obj1,obj2;
    // obj1.getdata();
    // obj1.showdata();
    obj2.rollno=58;
    obj2.name="rahul Sharma";
    obj2.showdata();
    return 0;
}
/*
class will be outside of main()
class classname
{
    public://Access Modifier
    data members or variables
    member function or methods
};

classname objectname,object2;

*/