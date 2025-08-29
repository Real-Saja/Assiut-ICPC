#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;


int main(){
    
    string s;
    
    cin >> s;
    int sum = 0;
    for (char c : s) {
        sum += c - '0'; //using ASCII to calculate them => '0' = 48 & '8' = 56 --> 56 - 48 = 8
    }
    cout << sum << endl;
    
}