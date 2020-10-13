/*
    problem : Find the sum of first N odds.
    input: 1
    output: 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int i = 0;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 1)
            sum += i;
        i++;
    }
    cout << sum << endl;
}