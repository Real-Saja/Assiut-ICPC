#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    int A, C;
    long long B, D;
    cin >> A >> B >> C >> D;
    if (B*log(A) > D*log(C)){ //A^B>C^D -> add log to both sides-> log(A^B)> log(C^D) : log(A^B)= B*log(A)
        cout << "YES";
    }else {
        cout << "NO";
    }
}