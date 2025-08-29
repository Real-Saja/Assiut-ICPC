#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;

void newArrays(int a[], int b[], int c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i] = b[i];
    }

    for (int i = 0; i < n; i++) {
        c[n + i] = a[i];
    }
}


int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int c[n*2];
    for (int i = 0;i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    newArrays(a, b, c, n);
    
    for (int i = 0; i < 2 * n; i++) {
        cout << c[i];
        cout << " ";
    }
    cout << endl;
    
    return 0;
}