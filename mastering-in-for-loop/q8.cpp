//  Write a program in C++ to check whether a number is prime or not.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    
    
        if(n %2==0){
            cout<<"The number you entered is not a prime number. "<<n<<endl;
        }else{
            cout<<"The number you entered is a prime number"<<n<<endl;
        }
    
}