#include <iostream>
#include <math.h>
using namespace std;

int printDivisors(int n){
    for(int i=1; i<=sqrt(n); i++){  //Loop runs only up to sqrt(n), reducing the number of iterations.
        if(n%i==0){
            cout << i << " "; //print the divisor
        }
        if(i != n/i){
            cout << n/i << " "; //print the corresponding divisor
        }
    }
}

int main(){
    int n;
    cin >> n;
    cout << "Divisors of " << n << " are: ";
    printDivisors(n);
}