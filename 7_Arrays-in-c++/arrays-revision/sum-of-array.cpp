#include <iostream>
using namespace std;
int main (){
    int array[3]={1,2,3};
    int ans=0 ;
    for(int i=0 ;i<3 ;i++){
ans+=array[i];
    }
cout<<"the sum of number is :"<<ans<<" ";
    return ans;
}