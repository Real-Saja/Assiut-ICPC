#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;
/*
ASCII code
A = 65
a = 97
*/

int main(){
    string s;
    cin >> s;
    
    int len = s.length();
    
    for (int i = 0; i < len; i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    
    cout << s << endl;
    
}