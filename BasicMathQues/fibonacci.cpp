#include <iostream>
using namespace std;

void fibonacci(int n){
    long long a = 0, b = 1, next;
    cout << "Fibonacci Series : " << a << " " << b <<  " ";

    for(int i=2; i<=n; i++){
        next = a+b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
    //to handle special cases
    if (num < 1) {
        cout << "Please enter a positive integer." << endl;
    } else if (num == 1) {
        cout << "Fibonacci Series: 0" << endl;
    } else {
        fibonacci(num);
    }

    return 0;
}