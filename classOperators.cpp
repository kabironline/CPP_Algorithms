/*
    Write a C++ program to create a class “Number” having data members x and y and perform mathematical 
    operations like addition, subtraction, multiplication and division using inline functions.
*/
#include <iostream>
using namespace std;
class Number
{
private:
    float x, y, add, sub, mul, div;

public:
    void getdata()
    {
        cout << "enter the value of x:";
        cin >> x;
        cout << "enter the value of y:";
        cin >> y;
    }
    void inline addition()
    {
        add = x + y;
    }
    void inline subtraction()
    {
        sub = x - y;
    }
    void inline multiplication()
    {
        mul = x * y;
    }
    void inline division()
    {
        div = x / y;
    }
    void showdata()
    {
        cout << "addition of two number is:" << add << endl;
        cout << "subtraction of two number is:" << sub << endl;
        cout << "multiplication of two number is:" << mul << endl;
        cout << "division of two number is:" << div;
    }
};
int main()
{
    Number n;
    n.getdata();
    n.addition();
    n.subtraction();
    n.multiplication();
    n.division();
    n.showdata();
    return 0;
}
