#include <iostream>
using namespace std;
class student
{
public:
    string name;
    student()
    {
        name = "unknown";
    }
    student(string n)
    {
        name = n;
    }
    void showdata()
    {
        cout << "your name is: " << name;
    }
    ~student()
    {
        printf("Destructor");
    }
};
int main()
{
    student s1("Sugandh"),s2,s3;
    s1.showdata();
    return 0;
}