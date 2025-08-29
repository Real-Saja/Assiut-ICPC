#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

typedef long long ll;
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    string s;
    cin >> s; //333-333 => s[0]s[1]s[2]s[3] => if a = 3 this means s[3] = '-'
    
    int len = s.length();
    if (a + b + 1 != len){
        cout << "No" << endl;;
        return 0;
    }
    if (s[a] != '-'){
        cout << "No" << endl;
        return 0;
    }
    
    for (int i = 0; i < len; i++){
        if (i == a) {
            continue;
        }
        if (s[i] < '0' || s[i] > '9') {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}