#include <iostream>
using namespace std;

class student
{
protected:
    char name[20];
    int rollNO;

public:
    void display()
    {
        cout << "Enter student name : ";
        cin >> name;

        cout << "Enter roll number : ";
        cin >> rollNO;
    }
};

class subiect : public student
{
protected:
    int account;
    int statastic;

public:
    void show()
    {
        cout << "Enter accounr marks : ";
        cin >> account;

        cout << "Enter statastic marks : ";
        cin >> statastic;
    }
};

class totalMarks : public subiect
{
protected:
    int total;
    float percentge;

public:
    void seeData()
    {
        total = account + statastic;
        percentge = (float)total / 2;
    }
};

class infromation : public totalMarks
{
public:
    void getdata()
    {
        cout << endl
             << endl
             << "--------------STUDENT MARKSHEET---------------" << endl
             << endl;

        cout << "Student name is       : " << name << endl;
        cout
            << "Student roll Number is : " << rollNO << endl;
        cout
            << "Accoount marks is      : " << account << endl;
        cout
            << "Statastic marks is     : " << statastic << endl;
        cout
            << "total marks is         : " << total << endl;
        cout
            << "Percentage is          : " << percentge << endl;
        cout << endl
             << "-----------------------------------------" << endl;
    }
};

int main()
{
    int i, n;

    cout << "Enter number of student : ";
    cin >> n;
    infromation s[200];

    for (i = 1; i <= n; i++)
    {
        cout << endl
             << "--------STUDENT DETAIL------" << endl
             << endl;
        s[i].display();
        s[i].show();
        s[i].seeData();
    }

    for (i = 1; i <= n; i++)
    {
        s[i].getdata();
    }
    return 0;
}