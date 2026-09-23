#include<iostream>
using namespace std;
class Rectangle
{
    public:
    float length, width;

    void input(float l, float w)
    {
        length = l;
        width = w;
    }
    void display()
    {
         float area;
        area = length * width;
        cout << "Area = " << area;
    }
};

int main()
{
    Rectangle r;

    r.input(10, 5);
    r.display();

    return 0;
}
