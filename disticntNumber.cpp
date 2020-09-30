/*
    problem : Find all the distinct digits in a number  
    input: 112233
    output: 3
*/

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore();
    int NList[N];
    int j = 0;
    bool found = false;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        cin.ignore();
    }
    for (int i = 0; i < N; i++)
    {
        j = i + 1;

        while (j < N && !found)
        {
            if (NList[i] == NList[j])
            {
                found = true;
            }
        }
        if (!found)
        {
        }
    }
    cout << "answer" << endl;
}