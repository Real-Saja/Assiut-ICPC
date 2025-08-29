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

    for (int i = 0; i < len; i++) {
        if (s[i] == '\\') {
            break;
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}
