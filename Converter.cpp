/*This program converts a input form any base (2,8,10,16) to the other bases.*/

#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
void start();
// Scope
string toBinary(int);
string toOctal(int);
int binaryToInt(int);
int octalToInt(int);
int hexToInt(string);
int convertToInt(string);
string toHex(int);
void convertFromType(string, int);
void printAns(int);
void error(string);
int goToStart();

int main()
{
    start();
    return 0;
}

void start()
{
    // Initalization
    int input;
    int type;
    string inputS;
    cout << endl
         << "Enter a Number" << endl;
    cin >> inputS;
    cout << endl
         << "You have entered the number: " << inputS << "." << endl
         << endl;
    cout << "What type of number is: " << inputS << endl
         << "Enter 1 for Int" << endl
         << "Enter 2 for Binary" << endl
         << "Enter 3 for Octal" << endl
         << "Enter 4 for Hex" << endl;
    type = getch() - 48;
    cout << type << endl;
    convertFromType(inputS, type);
}
// Comverting Numbers from string to int data type
int convertToInt(string input)
{
    int ans;
    int val;
    char c;
    for (int i = 0; i < input.length(); i++)
    {
        c = input[i];
        if (c >= '0' && c <= '9')
        {
            val = ((int)c - 48);
            ans = ans * 10 + val;
        }
        else
        {
            error("The number inputed doesnt match your type");
            return 0;
        }
    }
    return ans;
}
// Comverting Numbers from base 2 to base 10
int binaryToInt(int input)
{
    int mod, ans = 0, digit = 0;
    while (input != 0)
    {
        mod = input % 10;
        if (mod > 1)
        {
            error("Wrong input!");
            return 0;
        }
        else
        {
            ans = (mod * pow(2, digit)) + ans;
            input = input / 10;
            digit++;
        }
    }
    return ans;
}
// Comverting Numbers from base 8 to base 10
int octalToInt(int input)
{
    int mod, ans = 0, digit = 0;
    while (input != 0)
    {
        mod = input % 10;
        if (mod > 7)
        {
            error("Wrong input!");
            return 0;
        }
        else
        {
            ans = (mod * pow(8, digit)) + ans;
            input = input / 10;
            digit++;
        }
    }
    return ans;
}
// Comverting Numbers from base 16 to base 10
int hexToInt(string input)
{
    int mod = 0, ans = 0, digit = 0;
    char c = ' ';
    for (int i = (input.length() - 1); i >= 0; i--)
    {
        c = input[i];
        if (c >= '0' && c <= '9')
        {
            mod = ((int)c - 48);
        }
        else if (toupper(c) >= 'A' && toupper(c) <= 'F')
        {
            mod = ((int)(toupper(c)) - 55);
        }
        else
        {
            error("Invalid Character!");
            return 0;
        }
        ans = (mod * pow(16, digit)) + ans;
        digit++;
    }
    return ans;
}
// Comverting Numbers from base 10 to base 2
string toBinary(int temp)
{
    int mod = 0;
    string ans;
    while (temp > 0)
    {
        mod = (temp % 2);
        ans = (to_string(mod)) + ans;
        temp = temp / 2;
    }
    return ans;
}
// Comverting Numbers from base 10 to base 8
string toOctal(int temp)
{
    int mod;
    string ans;
    while (temp > 0)
    {
        mod = (temp % 8);
        ans = (to_string(mod)) + ans;
        temp = temp / 8;
    }
    return ans;
}
// Comverting Numbers from base 10 to base 16
string toHex(int temp)
{
    int mod;
    string ansS, modS;

    while (temp > 0)
    {
        mod = (temp % 16);
        if (mod >= 0xA && mod <= 0xF)
        {
            ansS = (char)(mod + 55) + ansS;
        }
        else if (mod < 0xA)
        {
            ansS = to_string(mod) + ansS;
        }
        else
        {
            error("Oops Something went wrong!");
            return 0;
        }
        temp = temp / 16;
    }
    return ansS;
}
// Converting the input from any base to base 10
void convertFromType(string input, int choice)
{
    int convertedVal;
    int convertedValInt;
    if (choice != 4)
    {
        convertedVal = convertToInt(input);
    }
    switch (choice)
    {
    case 1:
        convertedValInt = convertedVal;
        break;
    case 2:
        convertedValInt = binaryToInt(convertedVal);
        break;
    case 3:
        convertedValInt = octalToInt(convertedVal);
        break;
    case 4:
        convertedValInt = hexToInt(input);
        break;
    default:
        error("Wrong Input");
        break;
    }
    printAns(convertedValInt);
}
// Function that prints the output
void printAns(int input)
{
    cout << "The number: " << input << " in Decimal is: " << input << "." << endl;
    cout << "The number: " << input << " in Binary is: " << toBinary(input) << "." << endl;
    cout << "The number: " << input << " in Octal is: " << toOctal(input) << "." << endl;
    cout << "The number: " << input << " in Hexadecimal is: " << toHex(input) << "." << endl;
    goToStart();
}
// Funtion that throws an error when somthing goes wrong
void error(string error)
{
    cout << error << endl;
    goToStart();
}
// Function Asking the user if they want to repete the program.
int goToStart()
{
    char choice = ' ';
    cout << "Do you want to repeat the program? (Y/n)" << endl;
    choice = getch();
    if (choice == 'y')
    {
        start();
    }
    else if (choice = 'n')
    {
        return 0;
    }
    return 0;
}