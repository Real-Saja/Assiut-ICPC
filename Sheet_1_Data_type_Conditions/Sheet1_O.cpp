#include <iostream>
using namespace std;

int main(){
    
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (int(S) == 42) {
        cout << A * B;
    }else if (int(S) == 43){
        cout << A + B;
    }else if (int(S) == 45){
        cout << A - B;
    }else{
        cout << A / B;
    }
}