#include <iostream>

using namespace std;

class Simple_Intrest
{
private:
    float principle;
    float rate_of_interest;
    float duration;
    float simple_interest;
    float amount;

public:
    void get()
    {
        cout << " Enter Principle Amount :: ";
        cin >> principle;
        cout << "\n Enter ROI :: ";
        cin >> rate_of_interest;
        cout << "\n Enter Number of months:: ";
        cin >> duration;
        simple_interest = (principle * rate_of_interest * duration) / 100;
    }
    void put()
    {
        cout << "\n\n Interest : " << simple_interest;
    }
};
int main()
{
    Simple_Intrest si;
    si.get();
    si.put();

    return 0;
}