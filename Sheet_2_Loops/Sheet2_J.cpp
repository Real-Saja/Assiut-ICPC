#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for  (int I = 2; I <= N; I++){
        bool prime = 0;
        for  (int n = 2; n < I; n++){
            if ( I % n == 0){
                prime = 1;
            }
        }
        if (prime == 0){
            cout << I << " ";
        }    
    }
    return 0;
}