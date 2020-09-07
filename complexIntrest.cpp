/*  Problem: Calucate the comlex intrest
*/
#include <iostream>
#include <cmath>
using namespace std;
class Complex_Intrest
{
private:
    float principle;
    float rate_of_interest;
    float duration;
    int times_calc;
    float complex_intrest;
    float amount;

public:
    void setValues()
    {
        cout << " Enter Principle Amount :: ";
        cin >> principle;
        cout << "\n Enter ROI :: ";
        cin >> rate_of_interest;
        cout << "\n Enter Number of months:: ";
        cin >> duration;
        cout << "\n Enter the number of times the intrest will be calculated:: ";
        cin >> times_calc;
        complex_intrest = principle * (1 + pow((rate_of_interest / times_calc), (times_calc * duration)));
    }
    void getValues()
    {
        cout << "\n\n Interest : " << complex_intrest;
    }
};
int main()
{
    Complex_Intrest si;
    si.setValues();
    si.getValues();

    return 0;
}