/*
⦁	Write a program to declare a class “Book” having data members book_name, author, price. 
Accept and display data for book having maximum price.
*/
#include <iostream>
using namespace std;
class Book
{
private:
    string book_name;
    string author;
    float price;

public:
    void accept()
    {
        cout << "enter details of book" << endl;
        cout << "enter book name:";
        cin >> book_name;
        cout << "enter author name:";
        cin >> author;
        cout << "enter price:";
        cin >> price;
    }
    void display(Book b1)
    {
        if (price > b1.price)
        {
            cout << "book with maximum price is:" << endl;
            cout << "book name:" << book_name << endl;
            cout << "author name:" << author << endl;
            cout << "price:" << price;
        }
        else
        {
            cout << "book with maximum price is:" << endl;
            cout << "book name:" << b1.book_name << endl;
            cout << "author name:" << b1.author << endl;
            cout << "price:" << b1.price;
        }
    }
};
int main()
{
    Book b, b1;
    b.accept();
    b1.accept();
    b.display(b1);
    return 0;
}
