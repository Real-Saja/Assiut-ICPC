#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int max_v = arr[i];
                for (int k = i; k <= j; k++) {
                    if (arr[k] > max_v) {
                        max_v = arr[k];
                    }
                }
                cout << max_v;
                if (i != n - 1 || j != n - 1) {
                    cout << " ";
                }
            }
        }
        cout << endl;
        
    }
}