#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cstring>

typedef long long ll;
using namespace std;



int main()
{
    int n;
    cin >> n;
    int arr[27] = {0};
    for(int i = 0; i < n; i ++){
        char c;
        cin >> c;
        arr[(int)c - 97]++;
    }
    
    for (int i = 0; i <= 25; i++){
        while(arr[i] != 0){
            cout << (char)(i + 97);
            arr[i]--;
        }
    }
    cout << endl;

}