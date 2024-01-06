#include <iostream>
using namespace std;
int main (){
    int num, sum;
    sum=0;
    cout<<"enter the number :";
    cin>>num;
for(int i=0;i<=num;i++){
    sum+=i;
}
cout<<sum<<endl;
}