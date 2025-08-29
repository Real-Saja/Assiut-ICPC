#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int first = 0, second = 1;
    if (n == 0 || n == 1){
        cout << 0;
    }else {
        cout << first << " " << second << " ";
        for (int i = 2; i < n ; i++){
            int next = first + second;
            cout << next <<" ";
            first = second;
            second = next;
        }
    }
}