#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i=0; i < N; i++){
        cin >> A[i];
    }
    for (int n = N-1 ; n >= 0; n --){
        cout << A[n] << " ";
    }
    return 0;
}