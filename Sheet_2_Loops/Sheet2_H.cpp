#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    bool Final_Result=0;
    for (int I = 2; I < N ; I++){
        if (N % I == 0){
            Final_Result = 1;
        }
    }
    if (Final_Result==1){
        cout <<"NO";
    }else {
        cout <<"YES";
    }
 
    return 0;
}