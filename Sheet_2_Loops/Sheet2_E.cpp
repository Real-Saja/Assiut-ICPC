#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int Num, Num2=0;
    for (int I=1; I<=N; I++){
        cin >> Num;
        while(Num>Num2)
        Num2 = Num;
    }
    cout << Num2;
    
    
    return 0;
}