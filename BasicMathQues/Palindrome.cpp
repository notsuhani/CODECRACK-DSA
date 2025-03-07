#include <iostream>
using namespace std;

int Palindrome(int n){
    if(n < 0){
        return false;  // it will check if any given number contains 
        //negative value since negative number cannot be a palindrome number
    }
        long long reversed  = 0; //this will store the reversed version of n
        long long temp = n;  //a copy of x that we will modify without changing the original value
        while(temp != 0){
            int digit = temp%10; //extracts last digit of temp using modulus
            reversed = (reversed*10)+digit;  //multiply reverse by 10
            temp /= 10;  //removes the last digit of temp using division
        }
        return (reversed == n);  //if reverse is equal to n return true, else false
    }

int main(){
    int n;
    cin >> n;
    cout << Palindrome(n) << endl;
    return 0;
}