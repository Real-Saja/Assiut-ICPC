#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;
 /*
 3*3 array
 arr[0][0] arr[0][1] arr[0][2]
 arr[1][0] arr[1][1] arr[1][2]
 arr[2][0] arr[2][1] arr[2][2]
 column 1 => 3 (arr[num][0] => arr[num][2])
 row    1 => 3 (arr[0][num] => arr[2][num])
 
 */

void swapRowsAndColumns(int arr[501][501],int n, int x, int y) { //y = columns //x = rows
    x--;
    y--;
    for (int i = 0; i < n; i++){ // column swap
        int c = arr[i][x];
        arr[i][x] = arr[i][y];
        arr[i][y] = c;
    }
    
    for (int j = 0; j < n; j++){ // row swap
        int c = arr[x][j];
        arr[x][j] = arr[y][j];
        arr[y][j] = c;
    }
}


int main(){
    int n, x, y;
    cin >> n >> x >> y;
    
    int arr[501][501];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    swapRowsAndColumns(arr, n, x, y);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}