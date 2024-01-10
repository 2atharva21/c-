#include <iostream>
using namespace std;
int odd(int num){
    if(num %1==0){
        return false;
    }else{
        return true;
    }
}
int main (){

    for(int i=2;i<=10;i++){
        if(odd(i)){
            cout<<i<<endl;

    }

}
}