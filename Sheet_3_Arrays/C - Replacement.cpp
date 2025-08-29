#include <iostream>
using namespace std;

int main(){
    bool T =0;
    int N, S;
    cin >> N;
    int A[N];
    for (int i=0; i < N; i++){
        cin >> A[i];
        if (A[i]< 0){
            A[i] = 2;
        }else if (A[i]> 0){
            A[i] = 1;
        }else {
            A[i] = 0;
        }
    }
    for (int n=0; n<N;n++){
        cout << A[n] << " ";
    }
    return 0;
}