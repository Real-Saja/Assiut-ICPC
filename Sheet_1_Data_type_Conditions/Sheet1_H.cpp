#include <iostream>
#include <cmath>
using namespace std;
int main(){

double A, B;
    cin >> A >> B;
    cout <<"floor " << A << " / " << B << " = " << floor(A/B) << "\n";
    cout <<"ceil " << A << " / " << B << " = " << ceil(A/B) << "\n";
    cout <<"round " << A << " / " << B << " = " << round(A/B) << "\n"; //Half Round Up
    
}