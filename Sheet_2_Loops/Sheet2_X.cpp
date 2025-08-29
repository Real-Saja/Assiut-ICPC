#include <bits/stdc++.h>
using namespace std;
 
int main(){    
    int t, n;
    cin >> t ;
    while(t>0){
        cin >> n;
        int x = __builtin_popcount(n);
        int sum = pow(2,x) - 1;
        cout << sum << endl;
        t--;
    }
}
