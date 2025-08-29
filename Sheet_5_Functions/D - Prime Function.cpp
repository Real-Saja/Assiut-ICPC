#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;


bool isPrime(ll num){
    int cntr = 0;
    if (num <= 1)
        return false;
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                cntr++;
        }
        //The smallest factor of a number greater than one cannot be greater than the square root of that number :)
        if (cntr > 0)
            return false;

        else
            return true;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll num;
        cin >> num;
        if(isPrime(num)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}