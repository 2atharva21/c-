// A destructor is a special method in a class in object-oriented programming. Here are some key points about destructors:

// Name: The destructor has the same name as the class, but is preceded by a tilde (~) symbol1.

// Invocation: It is invoked automatically just before the memory of the object is released2.

// Purpose: Its main purpose is to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed1. A destructor is the last function that is going to be called before an object is destroyed1.

// Return Type: Destructors do not return values, hence they do not have a return type1.

// Definition: Destructors can be defined inside or outside the class declaration
#include <iostream>
using namespace std;
class retanglur {
public :
 int  l;
 int b;
 retanglur(){ // this is a default constructor not passed argument  
    l = 0;
    b=0;
 }
 retanglur(int a ,int c){//parameteried constructor passed argu
    l=a;
    b=c;
 }
 retanglur(retanglur& r){ //copy constructor that copied a same object that exited :
l =r.l;
b=r.b;
 }
 ~retanglur(){//destructor 
    cout<<"deleted"<<endl;
 }
};
int main(){
retanglur R1;
cout<<R1.l<<" "<<R1.b<<endl;
retanglur R2(4,3);
cout<<R2.l<<" "<<R2.b<<endl;
retanglur R3=R2;
cout<<R3.l<<" "<<R3.b<<endl;

}