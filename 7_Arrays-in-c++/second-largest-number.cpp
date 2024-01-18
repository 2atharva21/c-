#include <iostream>
#include <climits>
using namespace std;
int second_largest_number(int array[],int size){
    int largest_number=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0 ;i<size;i++){
        if(array[i]>largest_number)
        largest_number=array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i]!=largest_number){
            second_max=array[i];
        }
    }
    return second_max;
}
int main (){
        int array[]={2,3,5,7,6,1,7};
    int size=7;
    cout<<second_largest_number(array,size)<<endl;
}