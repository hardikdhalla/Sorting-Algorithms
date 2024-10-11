#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[6] = {49, 80, 98, 324, 100, 900}; // Changed values
    int n = 6;

    // Selection Sort
    for (int i = 0; i< n - 1; i++) {
        int min_index = i; // Assume the minimum is the first element of the unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] <arr[min_index]) {
min_index = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
        }
    }

    // Output the sorted array
cout<< "The sorted array will be: ";
    for (int i = 0; i< n; i++) {
cout<<arr[i] << " ";
    }
cout<<endl; // Add a newline for better output formatting
    return 0;
}
