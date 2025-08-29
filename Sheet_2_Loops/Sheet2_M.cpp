#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int test = -1;
    cin >> a >> b; 
    for(int i =a ; i <= b ; i++ ){
        bool is_lucky = false;
        int real_num = i;
        while (real_num > 0){
            int digit = real_num %10;
            if (digit != 4 && digit != 7)
                is_lucky = true;
            real_num = real_num/10;
        } 
        if (is_lucky == false){
            cout << i << " ";
            test++;
        }
        
    }
    if (test ==-1)
    cout << -1;

}