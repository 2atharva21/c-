// syntax of if-else -if conditional
// if(condition ){
//     code
// }else if (condition ){
//     code
// }else{
//     code
// }
#include <iostream>
using namespace std;
int main (){
    int age ;
    cin >>age;
    if(age<12){
        cout<<"child"<<endl;
    }else if(age > 12 and age<18){
        cout<<"teenger ";
    }else if(age >18){
        cout<<"adult";
    }else {
        cout<<"not vailed";
    }
}