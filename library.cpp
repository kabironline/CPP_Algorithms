#include <iostream>
using namespace std;

class book
{
private:
    string book_name;
    string author;
    int price;

public:
    void setData()
    {
        cout << "enter book name:" << endl;
        cin >> book_name;
        cout << "enter author:" << endl;
        cin >> author;
        cout << "enter price:" << endl;
        cin >> price;
    }
    int getPrice()
    {
        return price;
    }
};
int main()
{
    int N;
    int max = 0;
    cout << "Enter total books" << endl;
    cin >> N;
    book bookList[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter Details for book number " << (i + 1) << endl;
        bookList[i].setData();
    }
    for (int i = 0; i < N; i++)
    {
        if (max < bookList[i].getPrice())
        {
            max = bookList[i].getPrice();
        }
    }
    cout << "The max price is " << max << endl;
    return 0;
}