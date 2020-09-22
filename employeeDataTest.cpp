/* 
⦁	Write a C++ program to define a class "Employee" having data members emp_id,emp_name,emp_salary. 
    Accept and display data for employees having salary greater than 25,000
    */
#include <iostream>
using namespace std;
class employee
{
private:
    int emp_id;
    string emp_name;
    long emp_sal;

public:
    void getdata()
    {
        cout << "enter employee id:";
        cin >> emp_id;
        cout << "enter employee name:";
        cin >> emp_name;
        cout << "enter employee salary:";
        cin >> emp_sal;
    }
    void putdata()
    {
        if (emp_sal > 25000)
        {
            cout << "employee id is:" << emp_id << endl;
            cout << "employee name is:" << emp_name << endl;
            cout << "employee salary is:" << emp_sal << endl;
        }
    }
};
int main()
{
    employee e[3];
    for (int i = 0; i < 3; i++)
    {
        e[i].getdata();
    }
    cout << "employee with salary greater than 25000 are:" << endl;
    for (int i = 0; i < 3; i++)
    {
        e[i].putdata();
    }
    return 0;
}
