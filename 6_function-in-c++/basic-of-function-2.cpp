#include <iostream>
using namespace std;
int pro(int a,int b){
    int sum=a*b;
    return sum;
}
int add(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}
int main (){
 int p=12;
 int q=22;
 int e=3;
    cout<<pro(p,q)<<endl;
    // cout<<add(p,q)<<endl
    cout<<add(p,q,e)<<endl;
}