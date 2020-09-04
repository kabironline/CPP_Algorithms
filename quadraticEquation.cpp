/*  Problem: Input Three numbers and print out its roots using the quadratic equation formula
    Example 1 5 6 -------> input
            -------OUTPUT-------
            Root 1 is -2
            Root 2 is -3
*/
#include <iostream>
#include <cmath>
void calculateQuadraticEquation(float, float, float);
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0;
    cout << endl
         << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    calculateQuadraticEquation(a, b, c);
    return 0;
}
void calculateQuadraticEquation(float a, float b, float c)
{
    double root1 = 0;
    double root2 = 0;
    //Calculating roots
    double d = (pow(b, 2) - 4 * a * c);
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    // Printing roots
    cout << endl
         << "Root 1 is = " << root1 << endl;
    cout << "Root 2 is = " << root2 << endl
         << endl;
}