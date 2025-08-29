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
    int n;
    cin >> n;
    
    while(n--){
    string s, t;
    cin >> s >> t;
    
    int lenS = s.length();
    int lenT = t.length();
    
    string required = "";
        int minLen = lenS < lenT ? lenS : lenT;
        for (int i = 0; i < minLen; i++) {
            required += s[i];
            required += t[i];
        }
        
        for (int i = minLen; i < lenS; i++) {
            required += s[i];
        }
        for (int i = minLen; i < lenT; i++) {
            required += t[i];
        }
        
        cout << required << endl;
    }
}