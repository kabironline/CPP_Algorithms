/* Write a C++ program to define a class “student” having data members  roll no ,
name. Derive a class "marks" from "student" having data members m1,m2,m3, total
and percentage. Accept and display data for one student.*/

#include <iostream>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;

public:
    void getdata1()
    {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }
    void display1()
    {
        cout << "roll number is  " << roll_no << endl;
        cout << "name is " << name << endl;
    }
};
class marks : public Student
{
private:
    int m1, m2, m3;
    float total, percentage;

public:
    void getdata2()
    {
        cout << "Enter first mark:";
        cin >> m1;
        cout << "Enter second mark:";
        cin >> m2;
        cout << "Enter third mark:";
        cin >> m3;
    }
    void display2()
    {
        total = m1 + m2 + m3;
        percentage = ((total / 300) * 100);
        cout << "total is:" << total << endl;
        cout << "percentage is:" << percentage;
    }
};
int main()
{
    cout << endl;
    marks m1;
    m1.getdata1();
    m1.getdata2();
    cout << "\nthe details entered are:" << endl;
    m1.display1();
    m1.display2();
    return 0;
}