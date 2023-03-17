#include <iostream>
using namespace std;
int main()
{
    // printf("Hello World %d %c", a, m);
    // cout << "Hello world" << a << c;
    int a;
    // scanf("%d", &a);
    // cin>>a;
    // char name[30];
    string name, email;
    int age;
    cout << "ENter NAme";
    // cin >> name;
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Email: ";
    cin >> email;

    cout << "Your name is " << name << "Your Email is" << email << "Your age is " << age << endl;
    return 0;
}
/*
C is a procedure oriented programming language
C is used for basic concepts of programming
In c everything is based on procedures means function

C++

Cpp is aObject oriented Programming language
Cpp helps us to obtain real life implementaion in programming
Cpp everthing is based on Classes abd Objects
Cpp helps us to know how actual programming works
cpp contains
    Class
    Objects
    Constructor
    Encapsulation
    Inheritance
        single Inheritance
        mutltilevel inheritance
        multiple inheritance
        hierarchical inheritance
        Hybrid inheritance
    Abstraction
        public
        private
        protected
    Polymorphism
        Compile Time Polymorphism
            Function Overloading
            operator Overloading
        Run time polymorphism
            Virtual FUnction
    Friend Function
    Templates


*/