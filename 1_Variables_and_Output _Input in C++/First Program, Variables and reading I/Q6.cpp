#include <iostream>
using namespace std;
int main (){
    int a,b;
    a=2;
    b=3;
    cout<<"2 3"<<endl;
    int temp=a ;
    a=b;
    b=temp;
    cout<<a  <<" "<<b <<endl;
}