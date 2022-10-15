#include<iostream>
using namespace std;



int main()
{
    int *p = new int[6];
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 1;
    p[5] = 1;
    delete p;
return 0;
}