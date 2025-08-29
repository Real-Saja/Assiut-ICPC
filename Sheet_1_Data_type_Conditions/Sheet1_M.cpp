#include <iostream>
using namespace std;
 
int main(){
    
    char X;
    cin >> X;
    if (48 <= int(X) && int(X) <= 57){
        cout << "IS DIGIT";
    }else{ 
    if(65 <= int(X) && int(X) <= 90){
        cout << "ALPHA\nIS CAPITAL";
    }else{
        cout << "ALPHA\nIS SMALL";
    }
    }
 
}