#include <iostream>
#include<iomanip>
#include <cmath> 
using namespace std;

int main (){
    
    cout << fixed << setprecision(9);
    const double Pi = 3.141592653;
    float R;
    cin >> R;
    float R2 = pow(R, 2);
    cout << Pi * R2;
}