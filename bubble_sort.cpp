#include <iostream>
using namespace std;

void bubble_sort(int*, int);

int main() {

    int n = 20;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ' << endl;
    }

    bubble_sort(arr, n);

}

void bubble_sort(int* arr, int n) {
    bool swapped = false;

    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+]) {
            int k = arr[i];
            arr[i+1] = arr[i];
            arr[i] = k;
            swapped = true;
        }
    }

    if

}
