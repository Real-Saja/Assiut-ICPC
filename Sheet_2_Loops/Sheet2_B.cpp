#include <iostream>
using namespace std;
int main(){

    short N;
    cin >> N;
    if (N == 1){
        cout << -1;
    }else{
        for (int I =1;I<=N;I++){
            if(I%2==0){
                cout << I << endl;
            }
        }
    }
    
    return 0;
}