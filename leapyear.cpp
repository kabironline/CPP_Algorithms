/* 
Problem: Finding if the inputed year is a leap year or not
example :   2020 -> (input)
            Is a leap year----------> (output)
*/
#include <iostream>

using namespace std;
bool isLeapYear(int);
int main()
{
    int year = 0;
    cout << "Enter a year that you want to check is a leap year: ";
    cin >> year;
    if (isLeapYear(year))
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }
    return 0;
}
bool isLeapYear(int year)
{
    bool leap = false;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = true;
            }
            else
            {
                leap = false;
            }
        }
        else
        {
            leap = true;
        }
    }
    else
    {
        leap = false;
    }
    return year;
}