#include <iostream>
using namespace std;
int main (){
    int day ;
    cout<<"enter the day number:";
    cin >>day;
    switch (day)
    {
    case 1:
    cout<<"monday";
        break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wendesday";
    break;
    case 4:
    cout<<"thusday";
    break;
    case 5:
    cout<<"friday";
    break;
    case 6:
    cout<<"saterday";
    break;
    case 7:
    cout<<"sunday";
    break;   
    default:

        break;
    }
}