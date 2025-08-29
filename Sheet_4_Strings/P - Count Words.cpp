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
    int wordNumbers = 0;
    bool aWord = false;
    
    for (int i = 0; i < len; i++) {
        bool Letter = (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z');
        
        if (Letter && !aWord) {
            wordNumbers++;
            aWord = true;
        } else if (!Letter) {
            aWord = false;
        }
    }
    
    cout << wordNumbers << endl;
    
    return 0;
}
