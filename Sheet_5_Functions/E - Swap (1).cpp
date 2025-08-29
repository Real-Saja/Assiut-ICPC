#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;


void swapNum(int &a, int &b){
    int c = a;
    a = b;
    b = c;  
}

int main(){
    int a, b;
    cin >> a >> b;
    
    swapNum(a, b);
    
    cout << a << " " << b << endl;
    return 0;
}
