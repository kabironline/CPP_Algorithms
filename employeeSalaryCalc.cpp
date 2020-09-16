/*
Write a C++ program to define a class "employee" having data members emp_no,
emp_name and emp_designation. Derive a class "salary" from "employee" having
data membersbasic, hra, da, gross_sal.and percentage. Accept and display data
for one employee
*/

#include <iostream>
using namespace std;
class employee
{
private:
    int emp_no;
    string emp_name;
    string emp_designation;

public:
    void getdata1()
    {
        cout << "Enter employee number:";
        cin >> emp_no;
        cout << "Enter employee name:";
        cin >> emp_name;
        cout << "Enter designation:";
        cin >> emp_designation;
    }
    void display1()
    {
        cout << "employee number is:" << emp_no << endl;
        cout << "employee name is:" << emp_name << endl;
        cout << "employee designation is:" << emp_designation << endl;
    }
};
class salary : public employee
{
private:
    float basic, hra, da, gross_sal;

public:
    void getdata2()
    {
        cout << "Enter basic:";
        cin >> basic;
        cout << "Enter hra:";
        cin >> hra;
        cout << "Enter da:";
        cin >> da;
    }
    void display2()
    {
        gross_sal = basic + hra + da;
        cout << "basic is:" << basic << endl;
        cout << "hra is:" << hra << endl;
        cout << "da is:" << da << endl;
        cout << "gross salary is:" << gross_sal << endl;
    }
};
int main()
{
    salary s;
    s.getdata1();
    s.getdata2();
    cout << "\nthe details entered are:" << endl;
    s.display1();
    s.display2();

    return 0;
}
