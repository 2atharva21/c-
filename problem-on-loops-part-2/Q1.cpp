#include <iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter the number :";
    cin >>num;
//    int i =0 ;

//    while(num>0){
// int lastdigit=num%10;
// i*=lastdigit;
// num/=10;
//    }
//    cout<<i<<endl;
num%=10;
cout<<num;
}