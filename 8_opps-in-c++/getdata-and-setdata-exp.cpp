#include <iostream>
using namespace std;
class employee
{
    string name;
    string job;
    int salary;
    string location;

public:
    void setdata()
    {
        name = "atharva";
        job = "software eng";
        salary = 40000;
        location = "pune";
    }
    void getdata()
    {
        cout << "employee name =" << name << endl;
        cout << "job =" << job << endl;
        cout << "salary =" << salary << endl;
        cout << "location =" << location << endl;
    }
};
int main()
{
    employee e1;
    e1.setdata();
    e1.getdata();
}