#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--){
        int a;
        cin >> a;
        if (a == 0){
            cout << 0 << " ";
        }else{
            while(a > 0){
               cout << a%10 << " ";
               a/=10;
            }
        }
        cout << endl;
    }

}