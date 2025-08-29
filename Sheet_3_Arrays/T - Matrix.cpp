#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    ll primary = 0;
    ll secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += arr[i][i]; 
        secondary += arr[i][n - 1 - i]; 
    }

    ll diff = primary - secondary;
    if (diff < 0) {
        diff = -diff; 
    }

    cout << diff << endl;
}
