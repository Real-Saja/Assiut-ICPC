#include <iostream>
#include <numeric>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int div = min(a,b);
    
    while (div > 0){
        if(a%div==0 && b%div==0)
        break;
        div--;
    }
    cout << div;

    return 0;
}