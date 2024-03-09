#include <iostream>
using namespace std;
class complex {
int a ;
int b;
public:
void setdata(int value_1 ,int value_2){
a = value_1;
b=value_2;
}
void setdata_sum(complex o1 ,complex o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
void print_number(){
    cout<<"your number is a "<<a <<" "<<b<<endl;
}
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3.setdata_sum(c1,c2);
    c3.print_number();
}