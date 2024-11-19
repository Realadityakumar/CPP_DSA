#include <iostream>
using namespace std;

class Heap {
public:
    // Function to heapify a subtree rooted at index i
    void heapify(int arr[], int n, int i) {
        int largest = i;  // Initialize largest as root
        int left = 2 * i;  // Left child index
        int right = 2 * i + 1;  // Right child index

        // If left child is larger than root
        if (left <= n && arr[left] > arr[largest]) {
            largest = left;
        }

        // If right child is larger than largest so far
        if (right <= n && arr[right] > arr[largest]) {
            largest = right;
        }

        // If largest is not root
        if (largest != i) {
            swap(arr[i], arr[largest]);  // Swap root and largest
            heapify(arr, n, largest);  // Recursively heapify the affected subtree
        }
    }

    // Function to perform heap sort
    void heapSort(int arr[], int n) {
        // Build a max heap from the array
        for (int i = n / 2; i > 0; i--) {
            heapify(arr, n, i);
        }

        // Extract elements from heap one by one
        for (int i = n; i > 1; i--) {
            swap(arr[1], arr[i]);  // Swap root (max) with last element
            n--;  // Reduce the heap size
            heapify(arr, n, 1);  // Restore heap property
        }   
    }

    // Function to print the array
    void printArray(int arr[], int n) {
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;
    
    // Array to be sorted
    int arr[10] = {-1, 5, 3, 8, 4, 1, 7, 9, 6, 2};  // -1 to make it 1-indexed
    int n = 9;  // Number of elements in the array (excluding index 0)

    cout << "Original array: ";
    h.printArray(arr, n);

    // Perform heap sort    
    h.heapSort(arr, n);

    cout << "Sorted array: ";
    h.printArray(arr, n);

    return 0;
}
