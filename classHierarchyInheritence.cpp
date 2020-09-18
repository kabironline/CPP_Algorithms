#include <iostream>
using namespace std;
class cricketer
{
    char name[20];
    int age;
    int matches_played;

public:
    void get1()
    {
        cout << "enter player name:";
        cin >> name;
        cout << "enter player age:";
        cin >> age;
        cout << "enter no of matehed played by player:";
        cin >> matches_played;
    }
    void put1()
    {
        cout << "player name:" << name << endl;
        cout << "player age:" << age << endl;
        cout << "matched played:" << matches_played << endl;
    }
};
class bowler : virtual public cricketer
{
private:
    float economy_rate;
    int total_wicket;

public:
    void get2()
    {
        cout << "enter economy rate of player:";
        cin >> economy_rate;
        cout << "total wicket taken:";
        cin >> total_wicket;
    }
    void put2()
    {
        cout << "economy rate of player is:" << economy_rate << endl;
        cout << "total wicket taken:" << total_wicket << endl;
    }
};
class batsman : virtual public cricketer
{
private:
    float batting_avg;
    int total_runs;

public:
    void get3()
    {
        cout << "enter batting average:";
        cin >> batting_avg;
        cout << "enter total runs:";
        cin >> total_runs;
    }
    void put3()
    {
        cout << "batting average of player is:" << batting_avg << endl;
        cout << "total runs by player is:" << total_runs << endl;
    }
};
class allrounder : public bowler, public batsman
{
public:
    void get4()
    {
        get1();
        get2();
        get3();
    }
    void put4()
    {
        cout << "\n****the details of player are****\n";
        put1();
        put2();
        put3();
    }
};
int main()
{
    class allrounder a;
    a.get4();
    a.put4();
    return 0;
}