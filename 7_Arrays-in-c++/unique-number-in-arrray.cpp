#include <iostream>
using namespace std;
int find_unique_number (int array[],int size){
    int ans =0;
    for(int i= 0 ;i<size ;i++){
ans =ans^ array[i];
    }
    return ans;
}


int main (){
    int array []={1,2,3,3,2,1,4};
    int size=7 ;
   cout<< find_unique_number(array,size);

}