#include <iostream>
using namespace std;
class room{
public:
int lenght ;
int breath;
int height;
int calculate_area(){
  return lenght *breath;
}
int calculate_volume (){
  return lenght*breath*height;
}
};
int main (){
room room1;
room1.lenght =10;
room1.breath =20;
room1.height =20;
cout<<"sum of all area = "<<room1.calculate_area()<<endl;
cout<<"sum of all volume = "<<room1.calculate_volume()<<endl;

}
// In this program, we have used the Room class and its object room1 to calculate the area and volume of a room.

// In main(), we assigned the values of length, breadth, and height with the code:
// oom1.length = 42.5;
// room1.breadth = 30.8;
// room1.height = 19.2;
// We then called the functions calculateArea() and calculateVolume() to perform the necessary calculations.

// Note the use of the keyword public in the program. This means the members are public and can be accessed anywhere from the program.