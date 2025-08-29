#include <iostream>
using namespace std;

int main(){
    int A, B, C, mini;
    cin >> A >> B >> C;
    if (A >= B && A >= C){
        if (B >= C){
            cout << C << endl << B << endl << A << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }else {
            cout << B << endl << C << endl << A << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }
    } else if ( B >= C && B >= A) {
        if (C >= A){
            cout << A << endl << C << endl << B << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }else {
            cout << C << endl << A << endl << B << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }
    }else {
        if (B >= A){
            cout << A << endl << B << endl << C << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }else {
            cout << B << endl << A << endl << C << endl;
            cout << endl << A << endl << B << endl << C << endl;
        }
    }
}