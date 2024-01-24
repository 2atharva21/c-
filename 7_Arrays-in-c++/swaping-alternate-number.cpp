#include <iostream>
using namespace std;
void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
        // cout<<endl;
    }
}
void swaping_number(int array[],int size){
    // int swap=array[0];
    for(int i=0 ;i<size ;i+=2){
        if(i+1<size){
            swap(array[i],array[i+1]);
        }
    }
  

}
int main (){
    int array []={1,2,3,4,5,6};
    int size=6;
    swaping_number(array,size);
    print(array,size);
    
}