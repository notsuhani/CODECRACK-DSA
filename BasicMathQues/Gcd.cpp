#include <iostream>
using namespace std;

int Gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b; //Update a to the remainder of a divided by b
        }else{
            b = b % a; //Update b to the remainder of b divided by a
        }
    }
    if(a==0){   //if a==0, return b as GCD
        return b;
    }
    return a;  //if a != 0, return a as GCD
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << Gcd(n,m) << endl;
    return 0;
}