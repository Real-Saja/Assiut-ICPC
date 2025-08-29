#include <iostream>
using namespace std;

int main(){
    bool T =0;
    int N, S;
    cin >> N;
    int A[N];
    for (int i=0; i < N; i++){
        cin >> A[i];
    }
    cin >> S;
    for (int n=0; n<N;n++){
        if (S == A[n]){
            cout << n ;
            T=1;
            break;
        }
    }
    if (T ==0){
        cout << -1;
    }

    return 0;
}