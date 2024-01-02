#include <iostream>
using namespace std;
int main (){
    int n1 ,n2;
    cout<<"enter two intergers :";
    cin >>n1>>n2;
    cout<<"enter the operator(+,-,*,/,%)";
    int oper;
    cin>>oper;
    switch(oper){
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        case '%':
        cout<<n1%n2<<endl;
        break;
    }
}
