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
    getline(cin, s);

    int len = s.length();
    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (i == len || s[i] == ' ') {
            if (start < i) {
                reverse(s.begin() + start, s.begin() + i);
            }
            start = i + 1; 
        }
    }
    
    cout << s << endl;
    
    return 0;
}