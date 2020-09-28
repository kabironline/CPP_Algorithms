/*
    Write a C++ function to find the the sum of the odd characters in a word
    input : abc
    output : 98
*/
#include <iostream>
#include <string>

using namespace std;
int oddCharacterSum(string);
int main()
{
    string input;
    cout << "Enter a word:";
    cin >> input;
    cout << oddCharacterSum(input) << endl;
}
int oddCharacterSum(string word)
{
    int sum = 0;
    int i = 0;
    while (word[i] != NULL)
    {
        if (i % 2 == 1)
        {
            sum = sum + (int)word[i];
        }
        i++;
    }
    return sum;
}