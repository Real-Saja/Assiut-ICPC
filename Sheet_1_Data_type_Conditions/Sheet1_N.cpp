#include <iostream>
using namespace std;
int main (){
    
    char X;
    cin >> X;
    if (65 <= int(X) && int(X) <= 90){
        X = int(X) + 32;
        cout << X;
    }else{
        X = int(X) - 32;
        cout << X;
    }
}