#include<iostream>
using namespace std;

void print_unique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool is_unique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_unique(arr, n);
    return 0;
}
