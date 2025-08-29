#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int main(){
    int maxIndex = 0, minIndex =0;
    int n;
    cin >> n;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        MAX = max(MAX, arr[i]);
        MIN = min(MIN, arr[i]);
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == MAX)
            maxIndex = i;
        else if(arr[i] == MIN)
            minIndex = i;
    }

    arr[minIndex] = MAX;
    arr[maxIndex] = MIN;
    
    for (int i = 0; i <n; i++){
        cout << arr[i] << " ";    
    }
    
}