#include <iostream>
using namespace std;
double circumference(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*r*r;
}
int main (){
    int x;
    cout<<"area:"<<area(3)<<endl;
    cout<< "circumference:"<<circumference(3)<<endl;

}