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
    int q;
    cin >> q;

    cin.ignore();
    
    string s;
    getline(cin, s);
    
    int len = s.length();

    
    char original[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char key[63] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    string result = "";
    for (int i = 0; i < len; i++) {
        if (q == 1) {
            for (int j = 0; j < 62; j++) {
                if (s[i] == original[j]) {
                    result += key[j];
                    break;
                }
            }
        } else {
            for (int j = 0; j < 62; j++) {
                if (s[i] == key[j]) {
                    result += original[j];
                    break;
                }
            }
        }
    }
    
    cout << result << endl;

}