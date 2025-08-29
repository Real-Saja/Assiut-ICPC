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
    
    string s, t;
    
    cin >> s >> t;
    cout << s.length() << " " << t.length() << endl;
    cout << s << t << endl;
    cout << t[0];
    for (int i = 1; i < s.length() ; i++){
        cout << s[i];  
    }
    cout << " " << s[0];;
    for (int j = 1; j < t.length() ; j++){
        cout << t[j];  
    }
    cout << endl;
    
}