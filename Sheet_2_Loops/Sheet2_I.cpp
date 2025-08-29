#include <iostream>
using namespace std;
int main(){
int N, realNum, num, X = 0 ;
    cin >> N;
    realNum =N ;
    do {
        num = N % 10; //  12321 % 10 => 1 // 1232.1 % 10 => 2
        X *=10;
        X+=num;
        /*X = (X * 10) + num;*/ // (0*10)+1 = 1 // (2*10)+1 =21
        N = N/ 10;  // 12321 / 10 = 1232.1 /// 1232.1 / 10 = 123.21
    }while (N != 0);
    cout << X <<endl;
    if (X == realNum){
        cout <<"YES";
    }else {
        cout << "NO";
    }
    
    return 0;
}  