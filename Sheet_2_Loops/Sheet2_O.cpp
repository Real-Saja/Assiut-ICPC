#include <iostream>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    for ( int I=1; I <= N; I++){
        for (int m=1; m<=I ; m++){
            cout << "*"; 
        }
        cout << endl; 
    }


    
    return 0;
}