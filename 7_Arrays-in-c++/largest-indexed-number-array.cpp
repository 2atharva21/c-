#include <iostream>
using namespace std;
int largest_number(int array[],int size){
    int array_number=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>array_number)
        array_number=array[i];
    }
    return array_number;
}
int main (){
int array[]={1,7,3,4,5,6};
int size =6;
cout<<"the largest number is a :"<<largest_number(array,size);
}