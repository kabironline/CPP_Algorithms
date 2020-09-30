/*
    problem : Format unformatted phone number 
    input: 1234567890
    output: (123) 456-7890
*/
#include <iostream>
using namespace std;
int main()
{
    //Initaialization of variables
    string input;
    int i = 0;
    string formatted = "(";

    getline(cin, input);
    
    //Formating
    while (input[i] != '\000')
    {
        formatted = formatted + input[i];
        if (i == 2)
        {
            formatted = formatted + ") ";
        }
        if (i == 5)
        {
            formatted = formatted + "-";
        }
        i++;
    }
    
    //Printing output
    if (i == 10)
    {
        cout << formatted << endl;
    }
    else
    {
        cout << "Invalid Input"
    }
}