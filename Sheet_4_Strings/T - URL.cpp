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

    string prefix = "http://www.";
    string parameters[5] = {"username=", "pwd=", "profile=", "role=", "key="};
    int pos = 0;

    pos = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '?') {
            pos = i;
            break;
        }
    }

    vector<string> values(5);
    int current_pos = pos + 1; 
    for (int i = 0; i < 5; i++) {
        int p = parameters[i].length();
        int start = current_pos;
        for (int j = current_pos; j < len; j++) {
            if (s[j] == parameters[i][0]) {
                int match = 1;
                for (int k = 1; k < p; k++) {
                    if (j + k >= len || s[j + k] != parameters[i][k]) {
                        match = 0;
                        break;
                    }
                }
                if (match == 1) {
                    start = j + p;
                    break;
                }
            }
        }
        
        int end = start;
        for (int j = start; j < len; j++) {
            if (s[j] == '&' || j == len - 1) {
                if (j == len - 1 && s[j] != '&') {
                    end = j + 1;
                } else {
                    end = j;
                }
                break;
            }
        }
        
        string value = "";
        for (int j = start; j < end; j++) {
            value += s[j];
        }
        values[i] = value;
        current_pos = end + 1;
    }
    
    for (int i = 0; i < 5; i++) {
        string paramName = parameters[i];
        int param_len = paramName.length() - 1;
        for (int j = 0; j < param_len; j++) {
            cout << paramName[j];
        }
        cout << ": " << values[i] << endl;
    }
    
    return 0;

}