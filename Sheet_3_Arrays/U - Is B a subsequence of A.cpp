#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    
    int n,  m;
    cin >> n >> m;
    
    ll arr1[10001];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
        
    ll arr2[10001];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
        }
        
    int i = 0, j = 0; 
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            j++;
        }
        i++; 
    }
        
    if (j == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}
