#include <iostream>
#include <algorithm>
using namespace std ;
int main (){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
     reverse(array,array-size);

    cout << "Reversed array is: ";
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";

    return 0;
    
}