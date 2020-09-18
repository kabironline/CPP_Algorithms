/*Write a C++ program to calculate the area and perimeter of rectangle
using concept of inheritance*/

#include <iostream>
using namespace std;

class Area
{
private:
    float a_r;

public:
    void area(int l, int b)
    {
        a_r = l * b;
    }
    void display1()
    {
        cout << "area of rectangle is:" << a_r << endl;
    }
};
class Perimeter
{
private:
    float p_r;

public:
    void perimeter(int l, int b)
    {
        p_r = (2 * (l + b));
    }
    void display2()
    {
        cout << "perimeter of rectangle is:" << p_r << endl;
    }
};
class rectangle : public Area, public Perimeter
{
public:
    void display3()
    {
        display1();
        display2();
    }
};
int main()
{
    rectangle r;
    r.area(3, 4);
    r.perimeter(4, 5);
    r.display3();

    return 0;
}