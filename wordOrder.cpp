/*  Problem: Input a list of words and print them in accending order based on size
    Example I am Iron Man -------> input
            -------OUTPUT-------
            I
            am 
            Man 
            Iron
*/

#include <iostream>
using namespace std;

int wordSize(string);
void getValues(string[], int);
void sortWords(string[], int[], int);
void printArray(string[], int);

int main()
{
    //Inistalisation
    int len = 0;
    cout << "Enter length of array: ";
    cin >> len;
    string words[len];
    for (int i = 0; i < len; i++)
    {
        cin >> words[i];
    }
    getValues(words, len);
    return 0;
}
//Arranging Values
void getValues(string wordList[], int len)
{
    int wordSizeList[len];
    for (int i = 0; i < len; i++)
    {
        wordSizeList[i] = wordSize(wordList[i]);
    }
    sortWords(wordList, wordSizeList, len);
}
//Sorting words
void sortWords(string wordsList[], int wordsSizeList[], int len)
{
    int tempI = 0;
    string tempS = "";
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (wordsSizeList[i] < wordsSizeList[j])
            {
                //Sorting Sizes of words
                tempI = wordsSizeList[i];
                wordsSizeList[i] = wordsSizeList[j];
                wordsSizeList[j] = tempI;

                // Sorting actual words accoriding to sizes of words
                tempS = wordsList[i];
                wordsList[i] = wordsList[j];
                wordsList[j] = tempS;
            }
        }
    }
    printArray(wordsList, len);
}
//Calculating word size
int wordSize(string word)
{
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    return i;
}
//Printing Array
void printArray(string wordList[], int len)
{
    cout << "\n------OUTPUT------" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << wordList[i] << endl;
    }
}