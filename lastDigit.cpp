/*
    problem : Find the last character of the number or string  
    input: 112233
    output: 3
*/
#include <iostream>

using namespace std;
int main()
{
    string N;
    int i = 0;
    cin >> N; cin.ignore();
    while(N[i] != '\000'){
        i++;
    }
    cout << N[i-1] << endl;
}