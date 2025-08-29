#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>

typedef long long ll;
using namespace std;


double Average(double arr[10001],int n) {
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum/n;
}


int main(){
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << Average(arr, n) << endl;
    return 0;
}
