// Sam Cook
// Programming I
// 10-16-20
// Bubble sort
// This program uses a bubble sort to sort the integer elements in an array from smallest to largest

#include <iostream>
using namespace std;

void bubble_sort(int*, int);
void recursive_bubble_sort(int*, int);

int main() {

    // declare array
    int n = 20;
    int arr[n];

    // populate array with random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << ' ';
    }

    cout << endl;



    // call bubble sort function
    // bubble_sort(arr, n);

    // call recursive bubble sort function
    recursive_bubble_sort(arr, n);

    // output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

// bubble sort integer array
void bubble_sort(int* arr, int n) {

    bool keep_going = true;

    while (keep_going) {
        keep_going = false;
        // run through the array n-1 times.
        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                keep_going = true;
            }
        }
        // every iteration of the sort will end with the highest number in it's proper spot
        // which means we don't need to go all the way to the end of the array every time.
        // so lets save some time and take 1 from n.
        n--;
    }
}

// recursive bubble sort integer array
void recursive_bubble_sort(int* arr, int n) {
    // if n is less than or equal to 1 end sort function
    if (n > 1) {
        // not_sorted will be used to exit early if it is done sorting
        bool not_sorted = false;

        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                not_sorted = true;
            }
        }

        // if it's not done being sorted go again
        if (not_sorted) recursive_bubble_sort(arr, n-1);
    }
}
