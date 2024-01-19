#include <iostream>
#include <climits>
//using a int max and int min through a function 
using namespace std;
int maxnumber (int array[], int size){
int number1=INT_MIN;
for(int i=0 ;i<size;i++){
    if(array[i]>number1)
    number1=array[i];
}
return number1;
}
int minnumber (int array[], int size
){
int number2=INT_MAX;
for(int i=0 ;i<size;i++){
    if(array[i]<number2)
    number2=array[i];
}
return number2 ;
}
int main (){
    int size;
    cout<<"enter the number :"<<endl;
    cin >>size;
    int array[100];

  for(int i=0 ;i<size ;i++){
    cin>>array[i];
  }
cout<<"the max number is a "<<maxnumber(array,size)<<endl;
cout<<"the min number is a "<<minnumber(array,size)<<endl;
}