#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    bool isPer = 1;
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    sort(arr1,arr1+n);
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    sort(arr2, arr2+n);
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            cout << "no" <<endl;
            isPer = 0;
            break;
        }
    }
    if (isPer == 1){
        cout << "yes";
    }
}
