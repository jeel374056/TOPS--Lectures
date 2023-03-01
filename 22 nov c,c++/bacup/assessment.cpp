#include <iostream>
#include <math.h>
using namespace std;
class event
{
public:
    string event_name;
    string cust_name;
    int no_guest;
    int time, hr, min, servers;
    float full_cost, dinner_cost, server_cost, total_cost_event;
    void getdata()
    {
        cout << "Enter Event Name: ";
        getline(cin, event_name);
        cout << "Customer Fullname ";
        getline(cin, cust_name);
        cout << "Number of guest: ";
        cin >> no_guest;
        cout << "Enter Total Time : ";
        cin >> time;
    }
    void getcost()
    {
        hr = time / 60;
        min = time % 60;
        full_cost = float(hr) * 18.50 + float(min) * 0.40;
        dinner_cost = float(no_guest) * 20.70;
        servers = ceil(no_guest / 20);
        server_cost = full_cost * servers;
        total_cost_event = server_cost + dinner_cost;
    }
    void showdata()
    {
        cout << "Time is " << hr << " : " << min << endl;
        cout << "Cost= " << full_cost << endl;
        cout << "Dinner Cost= " << dinner_cost << endl;
        cout << "servers Cost= " << server_cost << endl;
        cout << "total Cost= " << total_cost_event << endl;
    }
};
int main()
{
    event e1;
    e1.getdata();
    e1.getcost();
    e1.showdata();
    return 0;
}