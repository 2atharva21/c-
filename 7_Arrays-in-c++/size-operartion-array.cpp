#include <iostream>
using namespace std;
int main (){
    // int  array[]={1,2,3,4,5,6,7,8};
// cout<<sizeof(array);
// for(int i=0;i<=7;i++){
//     cout<<array[i]<<endl;
// }
// for each loop:
// for(int ele:array){
//     cout<<ele<<endl;
// }
char  vowels[5];
cout<<"enter the number :";
for(int i=0;i<5;i++){
    cin>>vowels[i];
}
for(int i=0;i<5;i++){
    cout<<vowels[i]<<" ";
}
}