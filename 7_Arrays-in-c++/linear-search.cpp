#include <iostream>
using namespace std;
bool linear_search(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key)
        return 1;
    }
return 0;
}
int main (){
int array[]{1,2,3,4,5,6,7,8,9,10};
cout<<"enter the a number :";
int key;
cin>>key;

bool found=linear_search(array,10,key);
{
    if(found){
        cout<<"present"<<endl;
    }else{
         cout<<"absent"<<endl;
    }
}
}