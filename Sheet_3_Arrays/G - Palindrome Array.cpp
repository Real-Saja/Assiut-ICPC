#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    bool palindrome = 1;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0, j = n-1; i < n && j >= 0; i++, j--){
        if(arr[i] != arr[j]){
            palindrome = 0;    
        }
    }
    if(palindrome == 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;    
    }
}