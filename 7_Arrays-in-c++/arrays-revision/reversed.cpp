#include <iostream>
using namespace std;
void print(int array[],int size){
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
}
int reversed(int array[],int size){
    int start = 0;//0
    int end=size-1;//5-1
   while (start<=end){ //0 <=4;
    swap(array[start],array[end]);
    start++;
    end--;
   }
}
int main (){
    int array[]{1,2,3,4,5};
    int size =5;

   reversed(array,size);
    print(array,size);
}