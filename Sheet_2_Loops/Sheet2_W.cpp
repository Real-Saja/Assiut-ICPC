#include <iostream>
using namespace std;
 
typedef long long ll;
int main() {
    int n, spaces;
    cin >> n;
    spaces = n-1;
    for ( int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= spaces ; j++){
            cout << " ";
        }
        for (int k = 1 ; k < i*2 ; k++ ){
            cout << "*";
        }
        cout << endl;
        spaces --;
    }
    spaces = 0;
    for ( int i = n ; i >= 1 ; i--){
        for (int j = 1 ; j <= spaces ; j++){
            cout << " ";
        }
        for (int k = 1 ; k < i*2 ; k++ ){
            cout << "*";
        }
        cout << endl;
        spaces ++;
    }
}