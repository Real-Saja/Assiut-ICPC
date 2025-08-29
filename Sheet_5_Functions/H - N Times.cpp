#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;


void printChar(int num, char c) {
    for (int i = 1; i <= num; i++){
        cout << c << " ";   
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int num;
        char c;
        cin >> num >> c;
        printChar(num, c);
    }
    return 0;
}