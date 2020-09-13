/*  Problem: find out the sum of all the powers of a base number less than the target number
    Example 5 10 11 265 62 26 69 1 23-------> input (items of array)
            1 5 <------- output ()
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
    int smallestNum = list[0];
    int secSmallestNum = 99999999;
    int max;

    for (int i = 0; i < length; i++)
    {
        if (list[i] < smallestNum)
        {
            smallestNum = list[i];
        }
        if (list[i] > smallestNum && list[i] < secSmallestNum)
        {
            secSmallestNum = list[i];
        }
    }
    cout << "The smallest number is " << smallestNum;
    cout << "The second smallest number is " << secSmallestNum;
}