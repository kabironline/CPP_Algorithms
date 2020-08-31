/*  Problem: find out the sum of all the powers of a base number less than the target number
    Example 05 -------> input (target number)
            02 -------> input (base number)
            31 <------- output ()
*/
#include <iostream>
#include <cmath>

using namespace std;
int sumOfPowers(int, int);
int main()
{
    //Inistalisation
    int base;
    int target;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter target number: ";
    cin >> target;
    //Printing output
    cout << sumOfPowers(base, target);
    return 0;
}
//Function with algorithm
int sumOfPowers(int base, int target)
{
    int sum = 0;
    for (int i = 0; i < target; i++)
    {
        sum = sum + pow(base, i);
    }
    return sum;
}