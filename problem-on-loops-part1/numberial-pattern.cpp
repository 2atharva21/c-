#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"ente the number :";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    for(int i=1; i <=n;i++){
        for(int j=i;j<=n ;j++){
        cout<<(char)(j+64);
        }
        for(int j=1;j<=(i-1);j++){
                cout<<(char)(j+1);
        }
    }
