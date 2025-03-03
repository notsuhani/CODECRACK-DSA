#include <iostream>
using namespace std;

int main(){
    int n;  
    //taking input from user
    cin>>n;

    //outer loop for the rows
    for(int i=0; i<n; i++){

        //inner loop for the columns
        //no. of cols = row nos
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}