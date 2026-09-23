
#include <iostream>
using namespace std;
class Student
{
public:
    float marks1, marks2, marks3;
    void input(float a, float b, float c)
    {
        marks1 = a;
        marks2 = b;
        marks3 = c;
    }
    void total()
    {
        cout << "Total Marks = " << marks1 + marks2 + marks3 << endl;
    }
    void average()
    {
        cout << "Average Marks = " << (marks1 + marks2 + marks3) / 3 << endl;
    }
};

int main()
{
    Student s;
    s.input(80, 85, 90);
    s.total();
    s.average();
    return 0;
}