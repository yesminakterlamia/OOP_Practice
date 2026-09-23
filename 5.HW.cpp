#include<iostream>
using namespace std;
class Circle
{
    public:
   float radius,area,circumference;

    void input(float r)
    {
        radius = r;
    }

    void display()
    {
        area = 3.1416 * radius * radius;
        circumference = 2 * 3.1416 * radius;
        cout << "area: " << area << endl;
        cout << "circumference: " << circumference;
    }
};
int main()
{
    Circle c;
    c.input(5);
    c.display();

    return 0;
}
