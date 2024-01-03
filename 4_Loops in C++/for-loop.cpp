#include <iostream>
using namespace std;
int main (){
//for(init-statement;condition ;increament){
//     code;
// }         
    // for(int i=19;i<=190;i+=9){
    //     cout<<i<<endl;
    // }
    int n;
    cout<<"enter the number :";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        cout<<sum<<endl;
    }
}