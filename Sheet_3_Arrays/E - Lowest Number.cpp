#include <iostream>
using namespace std;

int main(){
    int N,M=1;
    cin >> N;
    int A[N];
    for (int i=1; i <= N; i++){
        cin >> A[i];
    }
    int S= A[1];
    for (int n = 1; n <= N; n ++){
        if (A[n]< S){
            S = A[n];
            M = n;
        }
    }
    cout << S <<" "<< M;

    return 0;
}