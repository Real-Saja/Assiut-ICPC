#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

void printNums (int n){
    for (int i = 1; i <= n; i++){
        cout << i ;
        if (i < n){
            cout << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    printNums(n);
    return 0;
}