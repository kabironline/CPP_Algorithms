#include <iostream>

using namespace std;

string readNumword(int);
int main()
{
    int num = 0;
    cout << "Enter a number that you want a Num-Word of: ";
    cin >> num;
    string numword = readNumword(num);
    cout << "The number " << num << " in num word is: " << numword << endl;
    return 0;
}
string readNumword(int num)
{
    cout << "\n\n\n";
    string word = "";
    int mod1 = 0;
    int mod2 = 0;
    int i = 0;
    int powerCounter = 0;
    string singles[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tees[10] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tys[9] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string hundreds[10] = {"", "one hundred", "two hundred", "three", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};
    string power[7] = {"", "thousand", "million", "billion", "trillion", "quadrillion", "quitllion"};
    if (num > 10 && num < 20)
    {
        word = tees[num - 10];
    }
    else
    {
        int temp = num;
        while (temp != 0)
        {
            mod1 = temp % 1000;
            word = power[powerCounter] + " " + word;
            mod2 = mod1 % 100;
            if (mod2 > 10 && mod2 < 20)
            {
                word = tees[mod2 - 10] + " " + word;
            }
            else
            {
                mod2 = mod1 % 10;
                word = mod2 != 0 ? singles[mod2] + " " + word : word;

                mod2 = mod1 % 100;
                mod2 = mod2 / 10;
                word = mod2 != 0 ? tys[mod2 - 1] + " " + word : word;
            }
            mod2 = mod1 / 100;
            word = mod2 != 0 ? hundreds[mod2] + " and " + word : word;

            temp = temp / 1000;
            powerCounter++;
        }
    }
    return word;
}