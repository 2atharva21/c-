#include <iostream>
using namespace std;
void print (int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
void swaping(int array[],int size){

        int temp=array[0];
        array[0]=array[1];
        array[1]=temp;
        int temp2=array[2];
        array[2]=array[3];
        array[3]=temp2;

    
}
int main (){
    int array []={1,2,3,4};
int size =4;
swaping(array,size);
print(array,size);
}