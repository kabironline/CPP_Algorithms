#include <iostream>
using namespace std;
class person
{
private:
    char name[20];
    char gender[20];
    int age;

public:
    void getdata1()
    {
        cout << "enter name:";
        cin >> name;
        cout << "enter gender:";
        cin >> gender;
        cout << "enter age:";
        cin >> age;
    }
    void display1()
    {
        cout << "name is:" << name << endl;
        cout << "gender is:" << gender << endl;
        cout << "age is:" << age << endl;
    }
};
class employee : public person
{
private:
    int emp_id;
    char company[20];
    float salary;

public:
    void getdata2()
    {
        cout << "enter employee id:";
        cin >> emp_id;
        cout << "enter company name:";
        cin >> company;
        cout << "enter salary:";
        cin >> salary;
    }
    void display2()
    {
        cout << "employee id is:" << emp_id << endl;
        cout << "company name is:" << company << endl;
        cout << "salary is:" << salary << endl;
    }
};
class programmer : public employee
{
private:
    int no_of_prog_lang_known;

public:
    void getdata3()
    {
        cout << "enter the number of programming language known:";
        cin >> no_of_prog_lang_known;
    }
    void display3()
    {
        cout << "enter the number of programming language known is:" << no_of_prog_lang_known << endl;
    }
};
int main()
{
    programmer p;
    p.getdata1();
    p.getdata2();
    p.getdata3();
    cout << "\nthe details entered are:" << endl;
    p.display1();
    p.display2();
    p.display3();
    return 0;
}