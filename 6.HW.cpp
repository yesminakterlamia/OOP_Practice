#include<iostream>
using namespace std;
class Calculator
{
    public:
    float a, b;
    void input(float x,float y)
    {
        a = x;
        b = y;
    }
    void addition()
    {
        cout<<"Addition = "<<a+b<<endl;
    }
    void subtraction()
    {
        cout<<"Subtraction = "<<a-b<<endl;
    }
    void multiplication()
    {
        cout<<"Multiplication = "<<a*b<<endl;
    }
    void division()
    {
        cout<<"Division = "<<a/b<<endl;
    }
};
int main()
{
    Calculator c;
    c.input(20, 5);
    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}
