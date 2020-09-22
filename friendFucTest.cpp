/*
Write a C++ program to swap the values of two variables using friend function.
*/

#include <iostream>
using namespace std;
class swapNum
{
private:
    int x, y;

public:
    void getdata()
    {
        cout << "enter first number:";
        cin >> x;
        cout << "enter second number:";
        cin >> y;
    }
    swapNum friend logic(swapNum);
    void putdata()
    {
        cout << "values after swapNum are:" << endl;
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
    }
};
swapNum logic(swapNum s3)
{
    int temp;
    temp = s3.x;
    s3.x = s3.y;
    s3.y = temp;
    return s3;
}
int main()
{
    swapNum s, s1;
    s.getdata();
    s1 = logic(s);
    s1.putdata();
    return 0;
}
