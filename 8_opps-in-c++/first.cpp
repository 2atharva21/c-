#include <iostream>
using namespace std;
// class created :
class fruit
{
public:         // this is a class
    int number; // datatypes that declayes while using class
    string color;
};

int main()
{
    fruit apple;       // object created:
    apple.number = 12; // to access the class through object using there a class name with dot pointer and declayes a variable
    apple.color = "Red";
    cout << apple.number << "-" << apple.color << endl;
    // to update the object using pointer and new word for creating a new object with an change a class :
    fruit *orange = new fruit();
    orange->number = 45;
    orange->color = "orange";
    cout << orange->number << "-" << orange->color << endl;
    fruit *green_apple = new fruit();
    green_apple->number = 87;
    green_apple->color = "green";
    cout << green_apple->number << "-" << green_apple->color << endl;
}