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
    sort(arr, arr + n);
    
    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;

        if (binary_search(arr, arr+n, x)) { //binarySearch(array, 0'start', arraySize - 1, target)
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
}