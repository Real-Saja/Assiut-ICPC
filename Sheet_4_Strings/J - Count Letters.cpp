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
    int len = s.length();
    
    int cntr[26] = {0}; 
    for (int i = 0; i < len; i++) {
        cntr[s[i] - 'a']++; 
    }

    for (int i = 0; i < 26; i++) {
        if (cntr[i] > 0) {
            cout << (char)('a' + i) << " : " << cntr[i] << endl;
        }
    }
    
}
/*
{0, 0, 0, 0, ....}
sajda => s[0] = 's' = 115 ,,, 'a' = 97 ~~~ arr[18]
arr[18] = 1; => arr{0, 0, 0, .., 1 [18], 0, ..}
(char)('a' + i) ,,,,cntr[18] = 1 ,,,, (char)('a' + 18) = (char)(97 + 18) = (char)(115) = s <3

*/