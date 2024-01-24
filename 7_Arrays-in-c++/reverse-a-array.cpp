#include <iostream>
using namespace std;
void reverse(int array[],int size){
int start =0;
int end =size-1;
while(start<=end){
    swap(array[start],array[end]);
    start++;
    end-;
}
}

int main (){
    int array[]{1,2,3,4,5,6};
    int size =6;
    cout<<reverse(array,size);
}