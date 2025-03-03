#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;  // end should be n-1, not n

    while (start <= end) {
        int mid = start + (end - start) / 2;  // This avoids potential overflow
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int result = BinarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}