#include <iostream>
#include <math.h>
using namespace std;

bool armstrong(int n){
    int originalNo = n, sum = 0, count = 0,temp = n;

    // Count the number of digits
    while(temp != 0){
        temp /= 10;
        count++;
    }

    // Calculate the sum of digits raised to the power of count
    temp = n;
    while(temp != 0){
        int digit =  temp%10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return sum == originalNo;
}

int main(){
    int n;
    cin>>n;
    cout << armstrong(n) << endl;
    if(armstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
    return 0;
}