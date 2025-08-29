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
    char s[10001];
    cin >> s;
    
    int len = strlen(s);
    char targetWord[6] = "hello";
    int match = 0;
    for (int i = 0; i < len; i++) {
        if (match < 5) {
            if (s[i] == targetWord[match]) {
                match++;
            }
        }
    }
    
    if (match == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}