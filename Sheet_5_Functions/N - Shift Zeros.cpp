#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;

void shiftZeros(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++){
        //{0, 8, 0, 5, 6}
        // arr[0] = 0 not gonna inter the if condition 
        // arr[1] = 8 => arr[1] => arr[0 = j] then j = 1
        if (arr[i] != 0){ 
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n) { 
        arr[j] = 0;
        j++;
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    shiftZeros(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}