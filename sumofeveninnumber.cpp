/*Problem: Add all the even digits of a number.
example :   25896321456 -> (input)
            28 ----------> (output)
*/
#include <iostream>
#include <string>
using namespace std;

int addEvenDigits(long long);
int main()
{
    long long input;
    cout << "Enter the digit of which you want the sum of all the even digits: ";
    cin >> input;

    cout << addEvenDigits(input);
}
int addEvenDigits(long long number)
{
    int answer = 0;
    while (number > 0)
    {
        answer = (number % 10) % 2 == 0 ? answer = (number % 10 + answer) : answer;
        number = number / 10;
    }
    return answer;
}