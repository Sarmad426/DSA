#include <iostream>
using namespace std;

// Function to swap two elements in the array
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function: organizes the array around a pivot element
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;        // Index of smaller element (boundary for smaller values)

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If element is smaller than pivot
            i++;               // Move boundary for smaller elements
            swap(arr[i], arr[j]);  // Swap smaller element with the current element
        }
    }
    swap(arr[i + 1], arr[high]);  // Place the pivot in its correct position
    return i + 1;  // Return pivot's position
}

// QuickSort function: sorts the array recursively
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Get the pivot index
        quickSort(arr, low, pi - 1);         // Sort the left of pivot
        quickSort(arr, pi + 1, high);        // Sort the right of pivot
    }
}

int main() {
    // The 5-element array
    int arr[] = {35, 12, 85, 47, 26};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Apply QuickSort
    quickSort(arr, 0, n - 1);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
