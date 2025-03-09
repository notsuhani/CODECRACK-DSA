#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Run n-1 passes
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++) { // Start from j = 0
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Swap if elements are out of order
                isSwapped = true;
            }
        }
        if (!isSwapped) {
            break; // If no swaps, array is already sorted
        }
    }
}

int main() {
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    // Print final sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        BubbleSort(arr, n); // Sort the array
        cout << arr[i] << " ";

    }
    cout << endl;

    return 0;
}
