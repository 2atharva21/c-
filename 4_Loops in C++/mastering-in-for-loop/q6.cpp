//  Write a program in C++ to display n terms of natural numbers and their sum.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;//store
    for(int i=1;i<=n;i++){
        sum+=i;
        cout<<sum<<endl;
    }
}

