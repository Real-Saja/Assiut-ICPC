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
        string s;
        cin >> s;
    
        int len = s.length();
    
        bool isGood = false;
        if (len >= 3) {
            for (int j = 0; j <= len - 3; j++) {
                if ((s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0') ||
                    (s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1')) {
                    isGood = true;
                    break;
                }
            }
        }
        
        if (isGood){
            cout << "Good" << endl;
        }else {
            cout << "Bad" << endl;
        }
    }
}