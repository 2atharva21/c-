#include <iostream >
using namespace std ;
int main (){
    int array []={3,4,6,7,1};
    int size=sizeof(array)/sizeof(array[0]);
    int target_sum =6;
    int push=0;
    for(int i =0; i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==target_sum){
                  push++;
            }
        }
    }cout<<push;
}
