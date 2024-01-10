#include <iostream>
using namespace std;
//display a function :
int add(int x,int y){
    // int sum=x+y;
    // return sum;
    return (x+y);
}
int main (){
    // declaring a variable
    int p =109; 
    int i =78;
    cout<<"100 + 78 = "<<add(p,i)<<endl;//calling function 
}