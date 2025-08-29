#include <iostream>
using namespace std;


int main() {
    int L_num;
    cin >> L_num;
    for ( int i = 1 ; i <= L_num*4 ; i++){
        if (i%4==0){
            cout << "PUM" << endl;
        }else {
            cout << i << " ";
        }
    }
}