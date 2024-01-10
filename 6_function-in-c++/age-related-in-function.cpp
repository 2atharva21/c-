#include <iostream>
using namespace std;
int age (int a){
    if(a>18){
        cout<<"yes"<<endl;
    }
    else if(a<18){
        cout<<"no"<<endl;
    }
}
int main (){
    int x;
    cin >>x;
    cout<<age(x)<<endl;
}