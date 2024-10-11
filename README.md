# Sorting-Algorithms-
---

# Sorting Algorithms in C++

## Overview

This project includes three basic sorting algorithm implementations in C++:
1. **Bubble Sort**
2. **Insertion Sort**
3. **Selection Sort**

Each algorithm sorts an array of integers in ascending order. The code is straightforward and easy to understand, making it ideal for learning how sorting algorithms work.

---

## Bubble Sort

### Algorithm Description:
**Bubble Sort** repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Example Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output the sorted array
    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

### How to Run:
1. Copy the code into a file (e.g., `bubble_sort.cpp`).
2. Compile the code using a C++ compiler:
   ```
   g++ -o bubble_sort bubble_sort.cpp
   ```
3. Run the executable:
   ```
   ./bubble_sort
   ```

---

## Insertion Sort

### Algorithm Description:
**Insertion Sort** builds the sorted array one element at a time. It picks an element from the unsorted part and inserts it into its correct position in the sorted part.

### Example Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {45, 23, 86, 12, 9};
    int n = 5;

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than current
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // Output the sorted array
    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

### How to Run:
1. Copy the code into a file (e.g., `insertion_sort.cpp`).
2. Compile the code using a C++ compiler:
   ```
   g++ -o insertion_sort insertion_sort.cpp
   ```
3. Run the executable:
   ```
   ./insertion_sort
   ```

---

## Selection Sort

### Algorithm Description:
**Selection Sort** repeatedly selects the smallest element from the unsorted part of the array and swaps it with the first element in the unsorted part.

### Example Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
        }
    }

    // Output the sorted array
    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

### How to Run:
1. Copy the code into a file (e.g., `selection_sort.cpp`).
2. Compile the code using a C++ compiler:
   ```
   g++ -o selection_sort selection_sort.cpp
   ```
3. Run the executable:
   ```
   ./selection_sort
   ```

---

## Key Differences

- **Bubble Sort** repeatedly swaps adjacent elements, making multiple passes over the array until it is sorted. It's simple but inefficient for large arrays.
- **Insertion Sort** builds the sorted array one element at a time by inserting elements into their correct positions. It works well for small arrays or arrays that are already partially sorted.
- **Selection Sort** finds the smallest element in the unsorted part and swaps it with the first unsorted element. Like Bubble Sort, it's not efficient for large datasets.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

This README is formatted in Markdown for use with GitHub or other platforms that support Markdown.
