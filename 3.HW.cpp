#include<iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int id;
    double salary;

    void input(string n, int i, double s)
    {
        name = n;
        id = i;
        salary = s;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e;

    e.input("Yesmin", 101, 30000);
    e.display();

    return 0;
}
