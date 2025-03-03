#include <iostream>
using namespace std;

int main(){
    int n;  
    //taking input from user
    cin>>n;

    //outer loop for the rows
    for(int i=0; i<=n; i++){
        //inner loop for the cols
        //no. of col = n-i
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}