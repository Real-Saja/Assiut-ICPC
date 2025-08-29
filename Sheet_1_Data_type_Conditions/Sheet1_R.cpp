#include <iostream>
using namespace std;
 
int main(){
    
    int X;
    cin >> X;
    cout << X/365 << " years" << endl;
    X = X % 365;
    cout << X / 30 << " months" << endl;
    X = X % 30;
    cout << X << " days" << endl;
    
}