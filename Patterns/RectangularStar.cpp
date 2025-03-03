#include <iostream>
using namespace std;

int main(){
    int n;  
    //taking input from user
    cin>>n;

    //outer loop for rows
    for(int i=0; i<n; i++){
        //inner loop for cols
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}