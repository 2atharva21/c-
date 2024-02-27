#include <iostream>
using namespace std;
class date{
private:
string n;
int  roll ;
int c;
public:
void get(string name  ,int roll_no,int Class);
void display();//declarition:
};
void date::get(string name,int roll_no ,int Class){
    n=name;
    roll=roll_no;
    c=Class;
}
void date::display(){
    cout<<n<<"-"<<roll<<"-"<<c<<endl;
}
int main(){
    date d1,d2,d3;
    d1.get("atharva",12,5);
    d2.get("sarthak",13,6);
    d3.get("rohan",14,7);
    cout<<"the detail of first child is :";
    d1.display();
    cout<<"the detail of second  child is :";
    d2.display();
    cout<<"the detail of third  child is :";
    d3.display();
}
