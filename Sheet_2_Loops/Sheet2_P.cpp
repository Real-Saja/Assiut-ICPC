#include <iostream>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    for ( int I=N; I>0; I--){
        
    for (int m=I; m>0 ; m--){
            cout << "*"; 
        }
        cout << endl; 
    }


    
    return 0;
}