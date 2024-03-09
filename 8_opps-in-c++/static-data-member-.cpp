#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "enter the id " << endl;
        cin >>id;
        
    }
        void getData()
    {
        cout << "the id of employee is a" << id << "and name is " << count << endl;
    }
};
int  employee::count;
int main()
{
    employee  atharva ,harry ,rohan;
    atharva.getData();
    atharva.setData();

    harry.getData();
    harry.getData();
    
    rohan.getData();
    rohan.setData();
    
    
}