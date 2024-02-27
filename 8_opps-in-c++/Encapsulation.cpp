// Encapsulation is a fundamental concept in object-oriented programming (OOP). It refers to the bundling of data and methods that operate on that data within a single unit, which is called a class
#include <iostream>
using namespace std;
class Encapsulation
{
    int x;

public:
    void set(int n)
    {
        x = n;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    Encapsulation obje;
    obje.set(5);
    cout << obje.get() << endl;
}