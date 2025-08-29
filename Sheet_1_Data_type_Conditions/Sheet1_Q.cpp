#include <iostream>
using namespace std;
 
int main(){
    
    float X, Y;
    cin >> X >> Y;
    if (X > 0 && Y != 0){
        if(Y > 0){
            cout << "Q1";
        }else {
            cout << "Q4";
        }
    }else if(X < 0 && Y != 0){
        if (Y > 0){
            cout << "Q2";
        }else {
            cout << "Q3";
        }
    }else if(Y == 0 && X != 0){
        cout << "Eixo X";
    }else if(X == 0 && Y != 0){
        cout << "Eixo Y";
    }else{
        cout << "Origem";
    }
}