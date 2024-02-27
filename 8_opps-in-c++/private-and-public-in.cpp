// Using public and private in C++ Class
#include <iostream>
using namespace std;
class room {
    public:

int lenght;
int breath;
int height;
public :
 void initData(int len,int bre,int hei){
lenght =len;
breath=bre;
height=hei;
 }
int calculation_area(){
    return lenght*breath;
}
int calculation_volume(){
    return lenght*breath*height;
}
     

};
int main (){
room room1;

    // pass the values of private variables as arguments
        room1.initData(425, 308, 192);

    cout << "Area of Room =  " << room1.calculation_area() << endl;
    cout << "Volume of Room =  " << room1.calculation_volume() << endl;

    return 0;
}
// area of Room =  1309
// Volume of Room =  25132.8
// The above example is nearly identical to the first example, except that the class variables are now private.

// Since the variables are now private, we cannot access them directly from main(). Hence, using the following code would be invalid:

// // invalid code
// obj.length = 42.5;
// obj.breadth = 30.8;
// obj.height = 19.2;