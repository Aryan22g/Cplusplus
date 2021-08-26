#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter ID : ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "ID is: " << id << endl;
    }
};
int main()
{
    // Employee harry,rohan, manav, arpit;
    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
}