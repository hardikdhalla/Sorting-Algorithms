#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[6] = {78, 89, 321, 65, 132, 34}; // Changed values
    int n = 6;

    // Bubble Sort
    for (int i = 0; i< n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] >arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

cout<< "The sorted array will be: ";
    for (int i = 0; i< n; i++) {
cout<<arr[i] << " ";
    }
cout<<endl; // Added newline for better output formatting
    return 0;
}
