#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;

bool isOdd(ll n) {
    return n % 2 == 1;
}

bool isPalindrome(ll num){
    int n = log2(num) + 1; //num of bits
    int l = 0, r = n - 1;

    while (l < r) { 
        if (((num >> l) & 1) != ((num >> r) & 1)) { //Shifting and get the MSB and the LSB (go to **)
            return false;
        }
        l++;
        r--;
    }
    return true;
    
}

int main(){
    ll num;
    cin >> num;
    if(isOdd(num) && isPalindrome(num)){
        cout << "YES";
    }else {
        cout << "NO";
    }
    
    return 0;
}
/*
**
example:
101 => 5
when l = 0 & r = 2
((num >> l) & 1) => 101 => 101 get the lsb = 1 || ((num >> r) & 1) => 101 => 1 get the lsb = 1
when l = 1 & r = 1
((num >> l) & 1) => 101 => 10 get the lsb = 0 || ((num >> r) & 1) => 10 => 1 get the lsb = 0
when l = 2 & r = 0
((num >> l) & 1) => 101 => 1 get the lsb = 1 || ((num >> r) & 1) => 101 => 1 get the lsb = 1
*/