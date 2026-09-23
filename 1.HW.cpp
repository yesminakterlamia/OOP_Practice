#include<iostream>
using namespace std;
class Student
{ public:
    string name;
    int id;
    float marks;

    void input(string n, int i, float m)
    {
        name = n;
        id = i;
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks<<endl ;
    }
};

int main()
{
    Student p;
    p.input("Yesmin", 101, 85.5);
    p.display();

    return 0;
}
