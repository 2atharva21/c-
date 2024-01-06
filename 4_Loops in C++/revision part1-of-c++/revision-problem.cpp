#include <iostream>
using namespace std;
int main (){
      
    int n1 , n2,n3;
    cout<<"enter the number 1st:";
    cin>>n1;
    cout<<"enter the number 2nd: ";
    cin >>n2;
    cout<<"enter the number 3rd: ";
    cin >>n3 ;
    // if(n1>n2 and n1<n3){
    //     cout<<"the number is maxmimum :"<<n1<<endl;
    // }else if(n2 >n3  and n2 >n1){
    //     cout<<"the number is maxmimum:"<<n2<<endl;
    // }else if (n3 >n1 and n3>n2){
    //     cout<<"the number is maxmimum :"<<n3<<endl;
    // }else{
    //     cout<<"the all number are equal "<<endl;
    // }
    if(n1>n2){
        if(n1>n3){
            cout<<"max is :"<<n1<<endl;
        }
    }
    else {
        if(n2>n3){
            cout<<" max is :"<<n2<<endl;
        }else{
            cout<<"max is :"<<n3<<endl;
        }
    }
}