#include <iostream>
using namespace std;

int main(){

    int N;
    cin >> N;
    for (int I = 1; I <= N; I++){
        if (N%I == 0){
            cout << I << endl;
        }
    }
    

    return 0;
}