#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;


ll equationResult(ll num, int power) { //5 5
    ll R = -1; // to get rid of -1 => (X^0-1)
    
    for(int i = 0; i <= power; i += 2) {  
        ll pow = 1;
        for(int p = 0; p < i; p++) { 
            pow *= num; 
        }
        R += pow;
    }
    return R;
}

// 5 5
/*
LOOP1
i = 0 > not gonna inter the p loop
R = 1
LOOP2
i = 2 
loop2-1 > p = 0 > R = 1 * 5
loop2-2 > p = 1 > R = 5 * 5 
LOOP3
i = 4 
loop3-1 > p = 0 > R = 25 * 5
loop3-2 > p = 1 > R = 125 * 5
loop3-2 > p = 2 > R = 625 * 5
AND SO ON...
*/

int main(){
    ll num;
    int power;
    cin >> num >> power;
    
    cout << equationResult(num, power) << endl;
    
    
    return 0;
}