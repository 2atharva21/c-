#include <iostream>
using namespace std;
void print(int array[],int size){
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
}
void reverse(int array[],int size){
int start =0;
int end =size-1;
while(start<=end){
    swap(array[start],array[end]);
    start++;
    end--;
}
}

int main (){
    int array[6]{1,2,3,4,5,6};
    
    reverse(array,6);
    print(array,6);
}