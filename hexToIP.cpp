/*
    problem : Convert hexadecimal numbers into IP addresses
    input: ffffffff
    output: 255.255.255.255
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int convertToDecimal(string);
int main()
{
    //initalization of variables;
    string hex;
    int i = 0;
    string ip = "";
    cout << "Enter a 8 digit hex number: ";
    cin >> hex;
    //seperating in pairs of two
    
    while (hex[i] != '\000')
    {
        int digit = convertToDecimal(hex.substr(i, 2));
        ip = ip + to_string(digit);
        i += 2;
        ip = i < 8 ? ip + "." : ip;
    }
    cout << ip << endl;
}
// converting 2 digit hex into decimal numbers
int convertToDecimal(string input)
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
            return 0;
        }
        ans = (mod * pow(16, digit)) + ans;
        digit++;
    }
    return ans;
}