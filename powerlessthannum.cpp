/*  Problem: find out the the maximum power of base number that less than the target no.
    Example   33 -------> input (target number)
            02 -------> input (base number)
            05 <------- output (2 ^ 5 < 33 && 2 ^ 5 > 33 - 2)
*/
#include <iostream>
#include <cmath>
using namespace std;
int powerFinder(int, int);
int main()
{
    //Initalising Variables
    int N;
    int P;

    cout << "Enter the the target number: ";
    cin >> N;
    cout << "\nEnter the the base number: ";
    cin >> P;
    //Printing the answer.
    cout << powerFinder(N, P) << endl;
}
// Function containing the algorithm
int powerFinder(int number, int power)
{
    int powerValue = 1;
    int answer = 1;
    bool found = false;
    while (!found)
    {
        powerValue = pow(power, answer);
        if (powerValue < number && powerValue > number - power)
        {
            found = true;
        }
        else
        {
            answer++;
        }
    }
    return answer;
}