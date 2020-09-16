/*  Problem: find out the sum of all the powers of a base number less than the target number
    Example 5 10 11 5 62 26 69 1 23-------> input (items of array)
            5 <------- output ()
*/
#include <iostream>
#include <cmath>

using namespace std;

void smallestNumber(int[], int);
int main()
{
    //Inistalisation
    int n;
    cout << "Enter the number of numbers: ";
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[n];
    }
    smallestNumber(list, n);
    return 0;
}
//Function with algorithm
void smallestNumber(int list[], int length)
{
    int duplicateNum = 0;
    int i = 0;
    while (i < length)
    {
        for (int j = 1 + 1; j < length; j++)
        {
            if (list[i] == list[j])
            {
                cout << "The duplicate number is " << list[i];
            }
        }
    }
}