#include <iostream>
using namespace std;

class nameAge
{
protected:
    char name[20];
    int age;

public:
    void display()
    {
        cout << "Enter student name : ";
        gets(name);

        cout << "Enter student age : ";
        cin >> age;
    }
};
class student
{
protected:
    float percentage;

public:
    void display()
    {
        cout << "Enter student percentage : ";
        cin >> percentage;
    }
};

class teacher
{
protected:
    string teacherName;
    float salary;

public:
    void display()
    {
        cout << "Enter teacher name : ";
        cin >> teacherName;

        cout << "Enter teacher salary : ";
        cin >> salary;
    }
};

class infromation : public nameAge, public student, public teacher
{
public:
    void display()
    {
        nameAge::display();
        student::display();
        teacher::display();

        cout << endl
             << endl
             << "--------------------------------------------" << endl
             << endl;
        cout << endl
             << endl
             << "-----------------------------------------------";

        cout << endl
             << endl
             << "------------INFROMATION-----------------" << endl;

        cout << endl
             << endl
             << "Student name is : " << name << endl;
        cout << "Student age is : " << age << endl;
        cout << "Student percentage is : " << percentage << endl;

        cout << endl
             << "Teacher name is : " << teacherName << endl;
        cout << "Teacher salary is : " << salary << endl;
    }
};

int main()
{

    infromation i;
    i.display();
    return 0;
}