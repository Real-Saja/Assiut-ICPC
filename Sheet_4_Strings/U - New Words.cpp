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
    
    int count[26];
    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        int index = c - 'a';
        count[index]++;
    }
    
    int minCnt = count['e' - 'a'];
    
    if (count['g' - 'a'] < minCnt) {
        minCnt = count['g' - 'a'];
    }
    if (count['y' - 'a'] < minCnt) {
        minCnt = count['y' - 'a'];
    }
    if (count['p' - 'a'] < minCnt) {
        minCnt = count['p' - 'a'];
    }
    if (count['t' - 'a'] < minCnt) {
        minCnt = count['t' - 'a'];
    }

    cout << minCnt << endl;
}