#include <iostream>
using namespace std;

int main() {
    int l, a, b, sum = 0, d_sum = 0;
    cin >> l >> a >>  b;
    for ( int i= 1 ; i <= l ; i++){
        int x = i;
        while (x){ 
            int digit = x%10;
            d_sum += digit;
            x/=10;
        }
        if (d_sum >= a && d_sum <= b){
             sum += i;
        }
        d_sum = 0;
    }
    cout << sum;
}