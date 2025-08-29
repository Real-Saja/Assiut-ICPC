#include <iostream>
using namespace std;

typedef long long ll;
int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--){
        ll a, b, ood_sum=0;
        cin >> a >> b;
        if(a>b){
            swap(a,b);
        }
        for (int i=a+1; i<b ; i++){
            if(i%2!=0){
                ood_sum +=i;
            }
        }
        cout << ood_sum << endl;
    }

}
