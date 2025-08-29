#include <iostream>
using namespace std;

int main(){
    int s, k, sum =0;
    cin >> k >> s;
    for (int x = 0 ; x <= k ; x++){
        for (int y = 0; y <= k ; y++){
        int sub_sum = x + y;
        int z = s -sub_sum;
            if (z <= k && z >= 0){
                sum ++;
            }
        }
    }
    cout << sum;
    return 0;
}