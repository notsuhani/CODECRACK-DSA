#include <iostream>
using namespace std;

int main(){ 
    //    *
    //   **
    //  ***
    // ****
    //*****

    int n;  
    //taking input from user
    cin>>n;

    //outer loop
    for(int i=0; i<n; i++){
        //leading spaces
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        //print stars
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}