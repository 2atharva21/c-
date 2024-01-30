#include <iostream>
#include <climits>
using namespace std;

int max_number(int array[], int size) {
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (array[i] > min && array[i] < max) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << max_number(array, size);
    return 0;
}
