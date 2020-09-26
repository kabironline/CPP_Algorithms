/*
    Write a C++ program to define a class “Product” having data
    members Prod_id, Prod_name, Prod_price.
    Accept and display data for 3 products using constructor overloading.
*/
#include <iostream>
#include <string>
using namespace std;
class product
{
private:
int prod_id;
char prod_name[20];
float prod_price;
public:
product()
{
prod_id=1;
strcpy(prod_name,"Ryzen 3 3200g");
prod_price=8169;
}
product(int x,char y[20],float z)
{
prod_id=x;
strcpy(prod_name,y);
prod_price=z;
}
product(product &p1)
{
prod_id=p1.prod_id;
strcpy(prod_name,p1.prod_name);
prod_price=p1.prod_price;
}
void showdata()
{
cout<<"product id is:"<<prod_id<<endl;
cout<<"prduct name:"<<prod_name<<endl;
cout<<"product price:"<<prod_price<<endl;
}
};
int main()
{
product p1;
product p2(2,"Intel 9100k",5000);
product p3(p2);
p1.showdata();
p2.showdata();
p3.showdata();
return 0;
}