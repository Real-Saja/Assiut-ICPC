#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int X;
    for (int I = 1; I <= N ; I++){
        cin >> X;
        long long result = 1;
        for (int i = 1; i <= X; i ++){
            result *= i;
        }
        cout  << result << endl;
    }
    
    return 0;
}