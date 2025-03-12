#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
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