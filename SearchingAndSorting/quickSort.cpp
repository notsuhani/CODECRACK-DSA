#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low]; //The pivot is chosen as the first element (arr[low])
    int i = low; //i is initialized to low
    int j = high; //j is initialized to high
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }

        // If i < j, it means two elements are out of order, so we swap them.
        if(i < j) swap(arr[i],arr[j]);
    }

    //swaps the pivot (arr[low]) with arr[j] so that it is correctly positioned.
    swap(arr[low],arr[j]);
    return j; //arr[j] is now the correct partition index.
}

void QuickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr,low,high);
        QuickSort(arr, low, pIndex-1);
        QuickSort(arr, pIndex+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr,0,arr.size()-1);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}