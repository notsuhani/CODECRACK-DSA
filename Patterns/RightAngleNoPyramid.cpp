#include <iostream>
using namespace std;

int main(){
    int n;  
    //taking input from user
    cin>>n;

    //outer loop for rows
    for(int i=1; i<=n; i++){
        //inner loop for cols 
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout<<endl;
    }
    return 0;
}    