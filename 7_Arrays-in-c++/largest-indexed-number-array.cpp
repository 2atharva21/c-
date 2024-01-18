#include <iostream>
using namespace std;
#include <climits>

int largest_of_array(int array[],int size){
    int largest_number=INT_MIN;
    int second_number=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>largest_number)
            largest_number=array[i];  
    }
    for(int i=0 ;i<size;i++){
        if(array[i]<second_number && array[i]!=largest_number);{
        second_number=array[i];
    }
    }
    return second_number;
}
int main (){
    int array[]={2,3,5,7,6,1,7};
    int size =7;
    cout<<"number is a "<<largest_of_array(array,size);
    // cout<<"number is a "<<largest_of_array(array,size);
}