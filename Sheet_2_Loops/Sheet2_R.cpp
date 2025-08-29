#include <iostream>
using namespace std;
 
typedef long long ll;
int main() {
    int N, M;
    while(cin >> N >> M && N > 0 && M > 0){
        ll sum = 0;
        for ( int i=min(N,M) ; i <= max(M,N) ; i++){
            cout << i << " ";
            sum+=i;
        }
        cout << "sum =" << sum << endl;
    }
}