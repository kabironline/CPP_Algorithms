/*
    Write a C++ function to find the the sum of all the character in word
    input : abc
    output : 294
*/
#include <iostream>
#include <string>

using namespace std;
int sumOfString(string);
int main()
{
    string input;
    cout << "Enter a word:";
    cin >> input;
    cout << sumOfString(input) << endl;
}
int sumOfString(string word)
{
    int sum = 0;
    int i = 0;
    while (word[i] != NULL)
    {
        if ((int)word[i] >= 48 && (int)word[i] < 58)
        {
            sum = (int)word[i] - 48;
        }
        else
        {
            sum = sum + (int)word[i];
        }
        i++;
    }
    return sum;
}