/* 
Problem: Count all the distict character in a string.
example :   aabbccdef --> (input)
            6 ----------> (output)
*/
#include <iostream>
#include <string>

using namespace std;
int charReader(string);
bool charChecker(string, char);
int main()
{
    // Initialisation
    string word;
    cout << "Enter the word of which you want to check the total number of distict characters: ";
    cin >> word;
    cout << charReader(word) << endl;
}
// Function checking every character in the input word
int charReader(string word)
{
    int i = 0;
    int uniqueChars = 0;
    string charAppered = "";
    while (word[i] != '\0')
    {
        cout << (charChecker(charAppered, word[i])) << endl;
        if (!charChecker(charAppered, word[i]))
        {
            charAppered = charAppered + word[i];
            uniqueChars++;
        }
        i++;
    }
    return uniqueChars;
}
// Function for checking if the current letter has appeared before
bool charChecker(string word, char letter)
{
    int j = 0;
    bool found = false;
    while (word[j] != '\0' && !found)
    {
        if (toupper(word[j]) == toupper(letter))
        {
            found = true;
        }
        j++;
    }
    return found;
}