#include <iostream>
using namespace std;

class calculator {
public :
int add (int a ,in b){
    return a+b;
}
int sumrealcomplex(complex  ,complex );
 
}
};
class complex{
  int a ,b;
  friend int calculator::sumrealcomplex(complex  ,complex);
  public:
  void setnumber(int n1 ,int n2){
    a=n1;
    b=n2;
  }  
  void printnumber(){
    cout<<"your number is a  :"<<a <<" +"<<b <<endl; 
  }
};
int sumrealcomplex(complex o1 ,complex o2){
    return (o1.a +o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
