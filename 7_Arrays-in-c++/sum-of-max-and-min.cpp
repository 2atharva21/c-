#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int size =sizeof(array)/sizeof(array[0]);
    int max=array[0];

    int min=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        
        }
        else if (array[i]<min){
            min=array[i];
       
        }
         }
    cout<<"the total is a :"<<(max+min )<<endl;
     
      
}