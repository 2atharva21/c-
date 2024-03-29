// A constructor is a special method in a class in object-oriented programming. Here are some key points about constructors:

#include <iostream>
using namespace std;
class retanglur
{
public:
   int l;
   int b;
   retanglur()
   { // this is a default constructor not passed argument
      l = 0;
      b = 0;
   }
   retanglur(int a, int c)
   { // parameteried constructor passed argu
      l = a;
      b = c;
   }
   retanglur(retanglur &r)
   { // copy constructor that copied a same object that exited :
      l = r.l;
      b = r.b;
   }
};
int main()
{
   retanglur R1;
   cout << R1.l << " " << R1.b << endl;
   retanglur R2(4, 3);
   cout << R2.l << " " << R2.b << endl;
   retanglur R3 = R2;
   cout << R3.l << " " << R3.b << endl;
}