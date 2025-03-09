#include <iostream>
using namespace std;

void Insertion(int arr[], int n){
    //This loop runs from 1 to n-1, processing each element one by one 
    for(int i=1; i<n; i++){
        //Stores the current element arr[i] in a temporary variable temp. 
        int temp = arr[i];
        //j is initialized to i-1, meaning we 
        //start comparing temp with the previous elements in the sorted part of the array.
        int j = i-1;
        
        for(; j>=0; j--){ //This moves j backward (from i-1 to 0) and checks where temp should be inserted.
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        //Places temp at its correct sorted position.
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    // Print final sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
       Insertion(arr, n); // Sort the array
        cout << arr[i] << " ";

    }
    cout << endl;

    return 0;
}