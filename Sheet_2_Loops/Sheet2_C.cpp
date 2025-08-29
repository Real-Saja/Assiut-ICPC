#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int X, positive = 0, negative = 0, even = 0, odd = 0;
    for (int I=1; I<=N; I++){
        cin >> X;
        if (X%2==0){
            even++;
        }else{
            odd++;
        }
        if(X>0){
            positive++;
        }else if(X<0){
            negative++;
        }
    }
    cout << "Even: " << even <<endl;
    cout << "Odd: " << odd <<endl;
    cout << "Positive: " << positive <<endl;
    cout << "Negative: " << negative <<endl;
    
    return 0;
}