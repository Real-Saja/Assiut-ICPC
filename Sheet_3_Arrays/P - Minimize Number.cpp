#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]%2 != 0){
            cout << 0 << endl;
            return 0;
        }
    }
    int cntr = 0; 
    bool check = 0;
    while(check == 0){
        for (int i = 0; i < n; i++){
            if(arr[i]%2 == 0){
                arr[i] = arr[i]/2;
            }else {
                check = 1;
                break;
            }
        }
        cntr++;
    }
    cout << cntr-1 << endl;
}