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
        
        int arr[103];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int cntr = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                bool isNondecreasing = true;
                for (int k = i; k < j; k++) {
                    if (arr[k] > arr[k + 1]) {
                        isNondecreasing = false;
                        break;
                    }
                }
                if (isNondecreasing) {
                    cntr++;
                }
            }
        }

        cout << cntr << endl;
        
    }
}