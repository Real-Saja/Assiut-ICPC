#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cntr = 1;
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int min = arr[0];
    for (int i = 1; i < size; i++){
        if(arr[i] == min){
            cntr++;
        }
    }
    
    if (cntr%2 == 1){
        cout << "Lucky" << endl;
    }else {
        cout << "Unlucky" << endl;
    }

    return 0;
}