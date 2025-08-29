#include <iostream>
#include <climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n]; 
        int smallest = INT_MAX;
        for (int i = 0; i < n; i++){ 
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                    smallest = min(smallest , (arr[i-1] + arr[j-1] + j - i));
            }
        }
        
        cout << smallest << endl;
        
    }

    return 0;
}