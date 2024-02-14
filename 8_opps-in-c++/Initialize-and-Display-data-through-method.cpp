#include <iostream>
using namespace std;
class employee{
public :
int number;
string name;
float salary;
void insert(int num ,string n ,float sal){
 number=num;
 name=n;
 salary = sal;
}
 void display(){
    cout<<number<<" "<<name<<" "<<salary<<endl;
 }

};
int main()
{
    employee e1 ;
    employee e2;
    employee e3;
    e1.insert(233,"atharva",213.23);
    e2.insert(213,"zare",2122.23);
    e3.insert(215553,"zfgare",21322.23);
    e1.display();
    e2.display();
    e3.display();
}