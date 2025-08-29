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

int main() {
    string s;
    getline(cin, s);
    
    int len = s.length();

    if (len == 1) {
        cout << s << endl;
        return 0;
    }
    
    string smallest = s;
    for (int i = 1; i < len; i++) {
        string x = "";
        for (int j = 0; j < i; j++) {
            x += s[j];
        }
        string y = "";
        for (int j = i; j < len; j++) {
            y += s[j];
        }
        
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        
        string result = x + y;
        
        if (result < smallest) {
            smallest = result;
        }
    }
    
    cout << smallest << endl;
}
