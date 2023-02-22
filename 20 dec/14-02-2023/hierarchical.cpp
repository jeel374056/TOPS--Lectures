#include <iostream>
using namespace std;
class person
{
protected:
    int age;
    string name;
    string email;
    void getdata()
    {
        cout << "Enter Age";
        cin >> age;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Email :";
        getline(cin, email);
    }
};
class faculty : public person
{
public:
    string course;
    int fid;
    void getfaculty()
    {
        getdata();
        cout << "Enter course: ";
        cin >> course;
        cout << "Enter Faculty ID: ";
        cin >> fid;
    }
};
class student : public person
{
public:
    int rollno;
    float percentage;
    void getstudent()
    {
        getdata();
        cout << "Enter Rollno : ";
        cin >> rollno;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
};

int main()
{
    faculty f1;
    student d1;
    f1.getfaculty();
    d1.getstudent();
    return 0;
}