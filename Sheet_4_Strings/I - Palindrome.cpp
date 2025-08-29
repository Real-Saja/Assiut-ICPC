#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cstring>

typedef long long ll;
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++){
        if (s[i] != s[len - 1 - i])
            isPalindrome = false;
    }
    
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}