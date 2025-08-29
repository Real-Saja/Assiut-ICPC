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
    char s[1001];
    cin >> s;
    
    int len = strlen(s);

    char subS[501][1001];
    int subScntr = 0;
    int balanced = 0;
    int start = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'L') {
            balanced++;
        } else {
            balanced--;
        }
        if (balanced == 0) {
            int pos = 0;
            for (int j = start; j <= i; j++) {
                subS[subScntr][pos] = s[j];
                pos++;
            }
            subS[subScntr][pos] = '\0';
            subScntr++;
            start = i + 1;
        }
    }
    
    cout << subScntr << endl;
    for (int i = 0; i < subScntr; i++) {
        cout << subS[i] << endl;
    }
    
    return 0;
}