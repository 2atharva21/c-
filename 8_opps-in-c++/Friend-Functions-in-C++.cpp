#include <iostream>
using namespace std;
class sum_of_number{
int a ;
int b;
int c;
public :
void set_number(){
    cout<<"enter the number a:"<<endl;
    cin >>a;
    cout<<"enter the number b:"<<endl;
    cin>>b;
}
friend  void total(sum_of_number &sum);
void display()
{
        cout <<"the sum of  :"<<c;
}

};
void total(sum_of_number &sum){
    sum.c=sum.a+sum.b;
}
int main(){
sum_of_number   s1;
s1.set_number();
total(s1);
s1.display();   
}