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



int main()
{
    int n;
    cin >> n;
    
    cin.ignore();
    
    string s;
    getline(cin, s);
    
    
    vector<vector<long long>> dp(n + 1, vector<long long>(27, -1000000));
    dp[0][0] = 0;
    
    for (int i = 0; i < n; i++) {
        for (int prev = 0; prev <= 26; prev++) {
            if (dp[i][prev] >= -1000000) {
                if (dp[i + 1][prev] < dp[i][prev]) {
                    dp[i + 1][prev] = dp[i][prev];
                }
                
                int curr = s[i] - 'a' + 1;
                if (prev == 0 || curr != prev) { 
                    if (dp[i + 1][curr] < dp[i][prev] + 1) {
                        dp[i + 1][curr] = dp[i][prev] + 1;
                    }
                }
            }
        }
    }
    
    long long maxLen = 0;
    for (int c = 0; c <= 26; c++) {
        if (dp[n][c] > maxLen) {
            maxLen = dp[n][c];
        }
    }
    
    cout << maxLen << endl;

}