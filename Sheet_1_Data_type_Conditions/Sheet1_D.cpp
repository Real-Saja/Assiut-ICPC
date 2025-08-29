#include <iostream>
using namespace std;
 
int main(){
    
    int A, C;
    long long B, D;
    cin >> A >> B >> C >> D;
    long long X = (A*B)-(C*D);
    cout << "Difference = " << X;
}