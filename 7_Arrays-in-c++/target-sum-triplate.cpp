#include <iostream>
using namespace std;
int main(){
    int array []={3,1,2,4,1,6};
    int size=6;
    int target_sum=7;
    int pairs=0;
    for(int i=0 ;i<size;i++){
        for(int p=i+1;p<size;p++){
            for(int j=p+1;j<size;j++){
                if(array[i]+array[p]+array[j]==target_sum){
                    pairs++;
                }
            }
        }
    }cout<<pairs;
}