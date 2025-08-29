#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;


int main(){
    int t;
    cin >> t; 
    
    string s;
    for (int i = 0; i < t; i ++){
        cin >> s;
        int len = s.length();
        if (len <= 10) {
            cout << s << endl;
        }else {
            cout << s[0] << len - 2 << s[len - 1] << endl;
        }
    }
    
    
    
}