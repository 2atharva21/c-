#include <iostream>
using namespace std ;
class employee {
private:
int a,b,c;
public :
int d,e;
void setData(int a1,int  b1,int c1);
void getData(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of e is "<<d<<endl;
    cout<<"the value of d is "<<e<<endl;
}
};
void employee::setData(int a1 ,int b1 ,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main (){
employee atharva;
atharva.d=5;
atharva.e=6;
atharva.setData(2,3,4);
atharva.getData();
return 0;
}