#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    #include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[m];
    while (n--){
        for (int i = 0; i < m; i++){
            cin >> arr[i];
        }
        for(int j = m-1; j >= 0; j--){
            cout << arr[j] << " ";
        }
        cout <<endl;
    }
    return 0;
    
}
}