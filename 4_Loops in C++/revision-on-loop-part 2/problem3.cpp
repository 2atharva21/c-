#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int factorial=1;//value store 
    for(int i=1 ; i<= n;++i){
        factorial*=i;
    
    }
    cout<<factorial<<endl;
    // for(int i=1;i<=200;i++){
    //     cout<<i<<endl;
    // }
    return 0;
}