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
    int n, q;
    cin >> n >> q;
    
    string s;
    cin >> s;
    
    while(q--){
        string query;
        cin >> query;
        
        if(query == "pop_back"){
            s.pop_back();
            
        }else if (query == "front") {
            cout << s[0] << endl;
            
        } else if (query == "back") {
            cout << s[s.length() - 1] << endl;
            
        } else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            if(l > r) swap (l,r);
            sort(s.begin() + l - 1, s.begin() + r);
            
        } else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            if(l > r) swap (l,r);
            reverse(s.begin() + l - 1, s.begin() + r);
            
        } else if (query == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
            
        } else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            if(l > r) swap (l,r);
            cout << s.substr(l - 1, r - l + 1) << endl;
            
        } else if (query == "push_back") {
            char x;
            cin >> x;
            s += x;
            
        } else {
            cout << "Invalid query!" << endl;
            return 1;
        }
        
    }
}
