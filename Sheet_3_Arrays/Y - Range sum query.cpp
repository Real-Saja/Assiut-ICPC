#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    
    ll arr[100001];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    //if we need sum from 3 to 6 this means from arr[2] to arr[5] 
    //we can simplify it by doing so => sum to arr[5] - sum to arr[2-1](=arr[1]) !! *-*
    
    ll sum[100001];
    sum[0] = 0;
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + arr[i]; 
    }
    
    for (int j = 0; j < q; j++) {
        int l, r;
        cin >> l >> r;
        
        ll fin = sum[r] - sum[l - 1];
        cout << fin << endl;
    }

}