#include <iostream>
using namespace std;

int main(){
    long long n, sum=0;
    cin >> n;
    long long A[n];
    for (int i=0; i < n; i++){
        cin >> A[n];
        sum += A[n];
    }
    cout <<abs(sum);
}