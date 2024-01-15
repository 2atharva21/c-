#include <iostream>
using namespace std;
int main (){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    int odd=0;
    int even=0;
    for(int i=0;i<size;i++ ){
        if(array[i] %2!=0){
            odd=array[i];
        
        cout<<"odd number :"<<odd<<" "<<endl;        
        }
        else if(array[i]%2==0){
            even=array[i];
        }
        
    }
 cout<<"even number is :"<<even<<" "<<endl;
}