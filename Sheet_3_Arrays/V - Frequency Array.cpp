#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[100001];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int freq[100001] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; 
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }
    
}