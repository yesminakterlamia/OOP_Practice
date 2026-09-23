#include<iostream>
using namespace std;
class Car
{
    public:
    string brand,model;
    double price;

    void input(string b,string m, double p)
    {
        brand = b;
        model = m;
        price = p;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price;
    }
};
int main()
{
    Car c;

    c.input("BMW","BMW M5", 20000000);
    c.display();

    return 0;
}

