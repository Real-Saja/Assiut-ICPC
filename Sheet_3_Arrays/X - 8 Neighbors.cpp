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
    char arr[101][101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    // a[0][0]   a[0][1]   a[0][2]
    // a[1][0]   a[1][1]   a[1][2]
    // a[2][0]   a[2][1]   a[2][2]
    
    bool areX = 1;
    if (arr[x][y-1] !='.' 
    && arr[x][y+1] !='.'
    && arr[x-1][y-1] !='.'
    && arr[x+1][y+1] !='.'
    && arr[x-1][y] !='.'
    && arr[x+1][y] !='.'
    && arr[x+1][y-1] !='.'
    && arr[x-1][y+1] !='.'){
        cout << "yes" << endl;
        
        
    }else{
        cout << "no" << endl;
    }
    
    

}