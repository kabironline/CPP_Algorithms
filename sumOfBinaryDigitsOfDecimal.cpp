/* Problem: Add Convert a decimal number (base 10) 
    to a binary number (base 2) and add all the digits
    of the coverted number.
example :   15 ---> (input)
            1111 -> (binary)
            28 ---> (output)
*/

#include <iostream>
using namespace std;

// Scope
int convertTOBinary(int);
int sumOfDigits(int);
int main()
{
    // Initalization of variables
    int number = 0;
    cout << "Enter a number for which you want the sum of binary digits: ";
    cin >> number;

    cout << endl
         << sumOfDigits(convertTOBinary(number)) << endl;
}

// Function converting decimal to binary
int convertTOBinary(int decimal)
{
    int mod = 0;
    int binary = 0;
    int sum = 0;
    while (decimal > 0)
    {
        mod = (decimal % 2);
        binary = mod + binary * 10;
        decimal = decimal / 2;
    }
    return binary;
}

// Function adding all the digits of a number
int sumOfDigits(int binary)
{
    int answer = 0;
    while (binary > 0)
    {
        answer = binary % 10 + answer;
        binary = binary / 10;
    }
    return answer;
}