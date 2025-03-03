#include <iostream>
using namespace std;

int SelectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << SelectionSort(arr, n) << endl;
    return 0;
}