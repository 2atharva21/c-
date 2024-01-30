#include <iostream>
using namespace std ;
int max_number(int array[],int size){
    int num=0;
   for(int i=1;i<size;i++){
if(array[i]>num)
    num=array[i];

   }
   return num ;
}
int main (){
    int array []{-2,8,7,4,5};
    int size =5;
cout<<max_number(array,size);
}