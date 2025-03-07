#include<iostream>
using namespace std;

                            
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;  
	int rev = 0;

	// Start a while loop to reverse the
	// digits of the input integer.
	
    while(n > 0){
		int lastDigit = n % 10;  // Extract the last digit of 'n' and store it in 'ld'.
		rev = (rev * 10) + lastDigit;  // Multiply the current reverse number by 10 and add the last digit.
		n = n / 10;    // Remove the last digit from 'n'.
	}
	cout << rev;
}
                            
                        