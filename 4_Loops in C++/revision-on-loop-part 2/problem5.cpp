#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
  int sum=0;//store
  int num=1;//inilise 
    while(num<=n){
        if(num % 2!= 0){
           sum+=num;
        }
        num++;
    }
    cout<<sum<<endl;
}